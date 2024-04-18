#include <iostream>
using namespace std;
class variables
{
    public:
    string a="7",b="8",c="9",d="4",e="5",f="6",g="1",h="2",i="3";
};
class working : public variables
{
    public:
  void drawlines()
    {
        cout << "\n\n";
        cout << "<<--TIC TAC TOE-->>\n\n";
        cout << "     |     |     \n";
        cout << "  "<<a<<"  |  "<<b<<"  |  "<<c<<"  \n";
        cout << "_____|_____|_____\n";
        cout << "     |     |     \n";
        cout << "  "<<d<<"  |  "<<e<<"  |  "<<f<<"  \n";
        cout << "_____|_____|_____\n";
        cout << "     |     |     \n";
        cout << "  "<<g<<"  |  "<<h<<"  |  "<<i<<"  \n";
        cout << "     |     |     \n";
    }
    void marksign(int n,char mark)
    {
        if(n==7)
        {
            a=mark;
        }
        if(n==8)
        {
            b=mark;
        }   
        if(n==9)
        {
            c=mark;
        }
        if(n==4)
        {
            d=mark;
        }
        if(n==5)
        {
            e=mark;
        }
        if(n==6)
        {
            f=mark;
        }
        if(n==1)
        {
            g=mark; 
        }
        if(n==2)
        {
            h=mark;
        }
        if(n==3)
        {
            i=mark;
        }
    }
    int checkwin(string Pname)
    {
        if(a==b && b==c)
        {
            drawlines();
            cout << Pname << " is winner!";
            return 5;
        }
        if(d==e && e==f)
        {
            drawlines();
            cout << Pname << " is winner!";
            return 5;
        }
        if(g==h && h==i)
        {
            drawlines();
            cout << Pname << " is winner!";
            return 5;
        }
        if(a==d && d==g)
        {
            drawlines();
            cout << Pname << " is winner!";
            return 5;
        }
        if(b==e && e==h)
        {
            drawlines();
            cout << Pname << " is winner!";
            return 5;
        }
        if(c==f && f==i)
        {
            drawlines();
            cout << Pname << " is winner!";
            return 5;
        }if(a==e && e==i)
        {
            drawlines();
            cout << Pname << " is winner!";
            return 5;
        }
        if(c==e && e==g)
        {
            drawlines();
            cout << Pname << " is winner!";  
            return 5;
        }
    return 0;
    }
    int nocheat(int loopcount,int n,int count[10])
    {
        for(int j=0;j<loopcount;j++)
        {
            if(n==count[j])
            {
                cout << "\nCHEATING detected\nNow restart the game";
                return 2;
            }
        }
        return 0;
    }
};
int main()
{
    working o;
    int n;
    string p1,p2;
    cout << "Name of Player 1:";
    cin >> p1;
    cout << "Name of Player 2:";
    cin >> p2;
    for(int j=0;j<9;j++)
    {
        o.drawlines();
            if(j%2==0)
        {
            cout << "\n" << p1 <<" - Type your number:";
            cin >> n;
                int count[10];
            if(n>=1 && n<=9)
            {
                int loopcount=j;
                count[j]=n;
                int cheat=o.nocheat(loopcount,n,count);
                if(cheat==2)
                {
                    break;
                }
            }
        if(n<1 || n>9)
            {
                cout << "\nPlease enter values from 1 to 9 only";
                j = j-1;
            }
                char mark='O';
            o.marksign(n,mark);
            int win = o.checkwin(p1);
            if(win==5)
            {
                break;
            }
        }
        else if(j%2!=0)
        {
            cout << "\n" << p2 <<" - Type your number:";
            cin >> n;    
            int count[10];
            if(n>=1 && n<=9)
            {
                int loopcount=j;
                count[j]=n;
                int cheat=o.nocheat(loopcount,n,count);
                if(cheat==2)
                {
                    break;
                }
            }
            if(n<1 || n>9)
            {
                cout << "\nPlease enter values from 1 to 9 only";
                j = j-1;
            }
             char mark='X';
            o.marksign(n,mark);
            int win = o.checkwin(p1);
            if(win==5)
            {
                break;
            }
        }
    }
    return 0;
}
