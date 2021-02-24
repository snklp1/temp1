#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int i =0; i<tc;i++)
    {
        int n;
        cin >>n;
        //int *arr = new int(n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //int *c0 = new int(n);
        //int *c1 = new int(n);
        //int *c2 = new int(n);
        int c1=0,c2=0,c0=0;

        for(int k = 0; k<n;k++)
        {
            int temp = 4;
            temp = arr[k]%3;

            if(temp==0)
            {
                //c0[c0] = arr[k];
                c0++;
            }

            if(temp==1)
            {
                //c1[c1] = arr[k];
                c1++;
            }

            if(temp==2)
            {
                //c2[c2] = arr[k];
                c2++;
            }
        }

        int equ = n/3;
        cout<<" c1="<<c1<<"    C2="<<c2<<"      c0="<<c0<<endl;

        int moves=0;

        if(c1!=equ||c2!=equ||c0!=equ)
        {
            //C0 =
            //C1 =
            //C2 =


            if(c0>c1&&c1>c2) //c0>c1>c2
            {
                ;


            }


            if(c1>c2&&c2>c0)//c1>c2>c0
            {
                ;
            }


            if(c2>c0&&c0>c1)//c2>c0>c1
            {
                ;
            }

            if(c2>c1&&c1>c0)//c2>c1>c0
            {
                ;
            }


            if(c1>c0&&c0>c2)//c1>c0>c2
            {
                ;
            }


            if(c0>c2&&c2>c1)//c0>c2>c1
            {
                ;
            }

        }
        else
        {
            if(c1==equ&&c2==equ)
            {
                cout<<0;
                break;
            }
            if(c1==equ)
            {
                if(c2>c0)
                {
                    moves = 2*(c2-c0);
                    cout<<moves;
                }
            }

        }










    }
    return 0;
}
