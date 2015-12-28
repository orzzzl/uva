#include<bits/stdc++.h>
using namespace std;

int N, Q;
vector<int> x;

struct S {
	int lind, rind, lval, rval, val;
	S() {
    val = lval = rval = 1;
  }
};

S merge(S a, S b) {
	S res;
  if (a.lind > b.lind) return merge(b, a);
  res.val = max(a.val, b.val);
  res.lind = a.lind;
  res.lval = a.lval;
  res.rind = b.rind;
  res.rval = b.rval;
  if (a.rind == b.lind) {
    res.val = max(res.val, a.rval + b.lval);
    if (a.lind == a.rind) {
      res.lval += b.lval;
    }
    if (b.rind == b.lind) {
      res.rval += a.rval;
    }
  }
	return res;
}

struct node {
    int start, end;
    S val;
    node *left, *right;

    node(int s, int e, S c):start(s), end(e), val(c),
                              left(NULL), right(NULL) {}
};

node* build_tree(int start, int end) {
    if (end < start) {
        return NULL;
    }
    node *root = new node(start, end, S());
    if (start != end) {
        int mid = start + (end - start) / 2;
        root->left = build_tree(start, mid);
        root->right = build_tree(mid + 1, end);
    }
    return root;
}


void init(node *root) {
  if (root == NULL) return;
  if (root->start == root->end) {
    // if(x[root->start - 1] == '(') {
    //   root->val = S(0, 1, 0);
    // } else {
    //   root->val = S(0, 0, 1);
    // }
    int tmp = x[root->start - 1];
    root->val = S();
    root->val.lind = root->val.rind = tmp;
    root->val.val = root->val.lval = root->val.rval = 1;
    return;
  }
  init(root->left);
  init(root->right);
  root->val = merge(root->left->val, root->right->val);
}

S query (node *root, int start, int end) {
    if (end < start || root == NULL) {
        return S();
    }
    //cerr << start << " " << end << endl;
    if (start == root->start && end == root->end) {
        return root->val;
    }
    int mid = root->start + (root->end - root->start) / 2;
    if (mid >= end) {
        return query(root->left, start, end);
    }
    if (mid < start) {
        return query(root->right, start, end);
    }
    if (mid >= start && end > mid) {
        return merge(query(root->left, start, mid),
               query(root->right, mid + 1, end));
    }
    return S();
}

int main () {
  while (1) {
  scanf("%d", &N);
  if (N == 0) break;
  scanf("%d", &Q);
  x.clear();
  for (int i = 0; i < N; i++) {
    int tmp; scanf("%d", &tmp);
    x.push_back(tmp);
  }
  node *root = build_tree(1, N);
  init(root);
  while (Q--) {
    int a, b; scanf("%d%d", &a, &b);
    auto s = query(root, a, b);
    //printf ("%d %d rind = %d, lind = %d, rval = %d, lval = %d, val = %d\n", a, b, s.rind, s.lind, s.rval, s.lval, s.val);
    printf("%d\n", query(root, a, b).val);
  }
}
}
