/*code does not work b/c memorey not being allocated dynamically, not on heap, on stack, gets popped off when func stops runnning

struct node * insert_front(struct node * n, int i){
  struct node new;
  new.i=i;
  new.next=n;
  return &new;

  should be:
  struct node *new=(struct node *)malloc(sizeof(struct node));
  new->i=i;
  new->next=n;
}
*/
