        #include<bits/stdc++.h>
        using namespace std;

        struct treeNode{
                int data;
                struct treeNode *left;
                struct treeNode *right;
        };

        struct treeNode* newNode(int _data)
        {
            struct treeNode* Node=new treeNode();
            Node->data=_data;
            Node->left=NULL;
            Node->right=NULL;
            return Node;
        }

        void postorder(treeNode* root)
        {
            
            if(root!=NULL)
            {
                postorder(root->left);
                postorder(root->right);
                cout<<root->data<<" ";

            }

            return;
        }


        void preorder(treeNode* root)
        {
            
            if(root!=NULL)
            {
                cout<<root->data<<" ";
                preorder(root->left);
                preorder(root->right);

            }

            return;
        }

        void inorder(treeNode* root)
        {
            if(root!=NULL)
            {
                inorder(root->left);
                cout<<root->data<<" ";
                inorder(root->right);

            }

            return;
        }

        void levelOrder(treeNode* root)
        {
            struct treeNode* temp;
            queue<treeNode *> que;
            que.push(root);
            if(!root)
                return;
            
            while(!que.empty())
            {
                temp=que.front();
                cout<<temp->data<<" ";
                que.pop();
                if(temp->left)
                    que.push(temp->left);
                if(temp->right)
                    que.push(temp->right);
                
            }
        }

        

        int main()
        {
            treeNode* root=newNode(3);
            root->left=newNode(2);
            root->right=newNode(4);
            root->left->left=newNode(1);
            cout<<"Inorder traversal : ";
            inorder(root);
            cout<<"\nPreorder traversal : ";
            preorder(root);
            cout<<"\nPostorder traversal : ";
            postorder(root);
            cout<<"\nLevelorder traversal : ";
            levelOrder(root);

            return 0;
        }