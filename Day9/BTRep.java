//* Binary Tree Representation in Java

class Node{
    int data;
    Node left;
    Node right;

    public Node(int key){
        data = key;
    }
}

class BTRep{
    public static void main(String[] args) {
        Node root = new Node(4);
        root.left = new Node(1);
        root.right = new Node(2);
        root.left.right = new Node(4);
    }
}