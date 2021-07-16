#include <iostream>

#include <string>

using namespace std;

struct date

{

  int d,m,y;

};

int isLeap(int y)

{

  if(y%100==0)

  {

      if(y%400==0)

      return 1;

      return 0;

  }

  if(y%4==0)

  return 1;

  return 0;

}

int day_no(date D)

{

  int m = D.m;

  int y = D.y;

  int d = D.d;

  int i;

  int mn[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

  for(i=0;i<m;i++)

  {

      d += mn[i];

  }

  if(isLeap(y))

  {

      if(m>2)

      d++;

  }

  return d;

}

date get_info(string s)

{

  date D;

  int i,p1,p2,l = s.length();

  for(i=0;i<l;i++)

  {

      if(s[i] == '-')

      {

      p1 = i;

      break ;

      }

  }

  for(i=p1+1;i<l;i++)

  {

      if(s[i] == '-')

      {

      p2 = i;

      break ;

      }

  }

 

  D.m = 0;

  for(i=0;i<p1;i++)

  D.m = (D.m)*10 + (s[i]-'0');

 

  D.d = 0;

  for(i=p1+1;i<p2;i++)

  D.d = (D.d)*10 + (s[i]-'0');

 

  D.y = 0;

  for(i=p2+1;i<l;i++)

  D.y = (D.y)*10 + (s[i]-'0');

 

  return D;

 

}

int main()

{

  string s1 = "4-5-2008";

  string s2 = "12-30-1995";

  string s3 = "6-21-2000";

  string s4 = "1-31-1500";

  string s5 = "7-19-1983";

  string s6 = "2-29-1976";

 

  cout<<"Date\t\tDay no\n\n";

  cout<<s1<<"\t"<<day_no(get_info(s1))<<endl;

  cout<<s2<<"\t"<<day_no(get_info(s2))<<endl;

  cout<<s3<<"\t"<<day_no(get_info(s3))<<endl;

  cout<<s4<<"\t"<<day_no(get_info(s4))<<endl;

  cout<<s5<<"\t"<<day_no(get_info(s5))<<endl;

  cout<<s6<<"\t"<<day_no(get_info(s6))<<endl;

 

 

  return 0;

}
