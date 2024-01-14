#include<iostream>
#include<string.h>
using namespace std;

class College
{
	
	
	public:
	
		virtual void facultyInfo()=0;
		
		
	
};



 	
 class Faculty:public College
{   
    public:
    string s;
        void facultyInfo()
    {
        while(s!="1")
        {
            cout<<"\n plz Enter subject name  : ";
			 	cout<<"\n Press 1 For Exit  \n 			";
			 
		        getline(cin,s);
			 
			 	for(int i=0;s[i]!='\0';i++)
        	{
		        if (s[i] >= 'A' && s[i] <= 'Z')    
			    s[i] = s[i] + 32;         
        	}
			
	        if(s=="digital technique" || s=="dt")	
			    cout<<"				Ulhas Deshmukh Sir";
			    
			else if(s=="database management system" || s=="dbms")
			    cout<<"				Akshay Pakhare Sir";
			
			else if(s=="computer graphics" || s=="cgr")
			    cout<<"				Nayna Borse Madam";
			
			else if(s=="data structure using c" || s=="dsu")
			    cout<<"				ASA sir";
			    
			else if(s=="object oriented programming" || s=="oop")
			    cout<<"				Arutwar sir";
			    
			else
		       cout<<"plz enter valid subject name";
		    
			    
			}
    }
    
};

class Student:public Faculty
{
    int n;
 	public:

		 ~Student()
		 {
		 }
 		Student()
 		{
		
		 	while(n!=1)
		 	{
			 
		 	
			 	cout<<"\n\n Please Enter Your Roll No .....Format Of 100  : ";
			 	cout<<"\n\n Press 1 For Exit  \n		  ";
			 	cin>>n;
			 	
			 	switch(n)
			 	{
			 		case 101 :
			 			cout<<"\n Roll No :-       101";
					 	cout<<"\n Name :-    	   AHIRE ROSHANI PRAVIN";	
					 	cout<<"\n Enrollment No :- 2000170108";
					 	break;
					 	case 102 :
			 			cout<<"\n Roll No :-       102";
					 	cout<<"\n Name :-    	   AHIRE YASH DEVENDRA";	
					 	cout<<"\n Enrollment No :- 2000170123";
					 	break;
					 	
					 	case 103 :
			 			cout<<"\n Roll No :-       103";
					 	cout<<"\n Name :-    	   AHIRRAO DEVYANI JITENDRA";	
					 	cout<<"\n Enrollment No :- 2000170136";
					 	break;
					 	
					 	case 104 : 
			 			cout<<"\n Roll No :-       104";
					 	cout<<"\n Name :-    	   BAGALE VISHAL ANIL";	
					 	cout<<"\n Enrollment No :- 2000170114";
					 	break;
					 	
					 	case 105 :
			 			cout<<"\n Roll No :-       105";
					 	cout<<"\n Name :-    	   BAVISKAR ADITYA RAJENDRA";	
					 	cout<<"\n Enrollment No :- 2000170161";
					 	break;
					 	
					 	case 106 :
			 			cout<<"\n Roll No :-       106";
					 	cout<<"\n Name :-    	   BAVISKAR DHANASHREE NANDKISHOR";	
					 	cout<<"\n Enrollment No :- 2000170115";
					 	break;
					 	
					 	case 107 :
			 			cout<<"\n Roll No :-       107";
					 	cout<<"\n Name :-    	   BERDE POOJA MAGAN";	
					 	cout<<"\n Enrollment No :- 2000170146";
					 	break;
					 	
					 	case 108 :
			 			cout<<"\n Roll No :-       108";
					 	cout<<"\n Name :-    	   BHADANE KARTIK PRADIP";	
					 	cout<<"\n Enrollment No :- 2000170130";
					 	break;
					 	
					 	case 109 :
			 			cout<<"\n Roll No :-       109";
					 	cout<<"\n Name :-    	   BHAMARE SANKET SANTOSH";	
					 	cout<<"\n Enrollment No :- 2000170107";
					 	break;
					 	
					 	case 110 :
			 			cout<<"\n Roll No :-       110";
					 	cout<<"\n Name :-    	   BHAVSAR DIPTI SUBHASH";	
					 	cout<<"\n Enrollment No :- 2000170164";
					 	break;
					 	
					 	case 111 :
			 			cout<<"\n Roll No :-       111";
					 	cout<<"\n Name :-    	   BORSE JAYESH ASHOK";	
					 	cout<<"\n Enrollment No :- 2000170140";
					 	break;
					 	
					 	case 112 :
			 			cout<<"\n Roll No :-       112";
					 	cout<<"\n Name :-    	   BORSE PRANAV JAGDISH";	
					 	cout<<"\n Enrollment No :- 2000170100";
					 	break;
					 	
					 	case 113 :
			 			cout<<"\n Roll No :-       113";
					 	cout<<"\n Name :-    	   BORSE VIVEK UTTAM";	
					 	cout<<"\n Enrollment No :- 2000170142";
					 	break;
					 	
					 	case 114 :
			 			cout<<"\n Roll No :-       114";
					 	cout<<"\n Name :-    	   CHAUDHARI DURVESH AJAY";	
					 	cout<<"\n Enrollment No :- 2000170116";
					 	break;
					 	
					 	case 115 :
			 			cout<<"\n Roll No :-       115";
					 	cout<<"\n Name :-    	   CHAUDHARI MAYURESH SANJAY";	
					 	cout<<"\n Enrollment No :- 2000170127";
					 	break;
					 	
					 	case 116 :
			 			cout<<"\n Roll No :-       116";
					 	cout<<"\n Name :-    	   CHAVAN ABHISHEK KAILAS";	
					 	cout<<"\n Enrollment No :- 2000170102";
					 	break;
					 	
					 	case 117 :
			 			cout<<"\n Roll No :-       117";
					 	cout<<"\n Name :-    	   CHAVAN KARAN UGAM";	
					 	cout<<"\n Enrollment No :- 2000170125";
					 	break;
					 	
					 	case 118 :
			 			cout<<"\n Roll No :-       118";
					 	cout<<"\n Name :-    	   CHITTE BHUMIKA DINESH";	
					 	cout<<"\n Enrollment No :- 200017053";
					 	break;
					 	
					 	case 119 :
			 			cout<<"\n Roll No :-       119";
					 	cout<<"\n Name :-    	   DESALE VAISHNAVI DINESH";	
					 	cout<<"\n Enrollment No :- 2000170131";
					 	break;
					 	
					 	case 120 :
			 			cout<<"\n Roll No :-       120";
					 	cout<<"\n Name :-    	   DESALE YASH SURESH";	
					 	cout<<"\n Enrollment No :- 2000170162";
					 	break;
					 	
					 	case 121 :
			 			cout<<"\n Roll No :-       121";
					 	cout<<"\n Name :-    	   ENDAIT DEOYANI NITIN";	
					 	cout<<"\n Enrollment No :- 2000170158";
					 	break;
					 	
					 	case 122 :
			 			cout<<"\n Roll No :-       122";
					 	cout<<"\n Name :-    	   GAWADE MADHAVI SURYAKANT";	
					 	cout<<"\n Enrollment No :- 2000170151";
					 	break;
					 	
					 	case 123 :
			 			cout<<"\n Roll No :-       123";
					 	cout<<"\n Name :-    	   GAWALI HARSH UMESH";	
					 	cout<<"\n Enrollment No :- 2000170119";
					 	break;
					 	
					 	case 124 :
			 			cout<<"\n Roll No :-       124";
					 	cout<<"\n Name :-    	   GIL NIKHIL HATESING";	
					 	cout<<"\n Enrollment No :- 2000170120";
					 	break;
					 	
					 	case 125 :
			 			cout<<"\n Roll No :-       125";
					 	cout<<"\n Name :-    	   GOSAVI CHETANA SUBHASH";	
					 	cout<<"\n Enrollment No :- 2000170145";
					 	break;
					 	
					 	case 126 :
			 			cout<<"\n Roll No :-       126";
					 	cout<<"\n Name :-    	   HIRAVE AJAY MANOHAR";	
					 	cout<<"\n Enrollment No :- 2000170156";
					 	break;
					 	
					 	case 127 :
			 			cout<<"\n Roll No :-       127";
					 	cout<<"\n Name :-    	   JADHAV KOMAL SURESH";	
					 	cout<<"\n Enrollment No :- 2000170104";
					 	break;
					 	
					 	case 128 :
			 			cout<<"\n Roll No :-       128";
					 	cout<<"\n Name :-    	   JATHAR KRUSHNA ARVIND";	
					 	cout<<"\n Enrollment No :- 2000170163";
					 	break;
					 	
					 	case 129 :
			 			cout<<"\n Roll No :-       129";
					 	cout<<"\n Name :-    	   PATIL JAYESH NITIN ";	
					 	cout<<"\n Enrollment No :- 2000170103";
					 	break;
					 	
					 	case 130 :
			 			cout<<"\n Roll No :-       130";
					 	cout<<"\n Name :-    	   KANKAL GAUTAM SANJAY";	
					 	cout<<"\n Enrollment No :- 2000170121";
					 	break;
					 	
					 	case 131 :
			 			cout<<"\n Roll No :-       131";
					 	cout<<"\n Name :-    	   KANNOR HEMANT ROHIDAS";	
					 	cout<<"\n Enrollment No :- 2000170122";
					 	break;
					 	
					 	case 132 :
			 			cout<<"\n Roll No :-       132";
					 	cout<<"\n Name :-    	   KHAIRNAR DIPALI MAHENDRA";	
					 	cout<<"\n Enrollment No :- 2000170129";
					 	break;
					 	
					 	case 133 :
			 			cout<<"\n Roll No :-       133";
					 	cout<<"\n Name :-    	   KHAIRNAR PRERANA SUKDEV";	
					 	cout<<"\n Enrollment No :- 2000170148";
					 	break;
					 	
					 	case 134 :
			 			cout<<"\n Roll No :-       134";
					 	cout<<"\n Name :-    	   KHARE SIDDHI VINAYAK";	
					 	cout<<"\n Enrollment No :- 2000170133";
					 	break;
					 	
					 	case 135 :
			 			cout<<"\n Roll No :-       135";
					 	cout<<"\n Name :-    	   KULKARNI DARSHAN RAJENDRAKUMAR";	
					 	cout<<"\n Enrollment No :- 2000170143";
					 	break;
					 	
					 	case 136:
			 			cout<<"\n Roll No :-       136";
					 	cout<<"\n Name :-    	   LAMBOLE PAWAN VITTHAL";	
					 	cout<<"\n Enrollment No :- 2000170098";
					 	break;
					 	
					 	case 137 :
			 			cout<<"\n Roll No :-       137";
					 	cout<<"\n Name :-    	   MALI KAMINI BHAGWAN";	
					 	cout<<"\n Enrollment No :- 2000170134";
					 	break;
					 	
					 	case 138 :
			 			cout<<"\n Roll No :-       138";
					 	cout<<"\n Name :-    	   MARATHE DIVYA ANIL";	
					 	cout<<"\n Enrollment No :- 2000170157";
					 	break;
					 	
					 	case 139 :
			 			cout<<"\n Roll No :-       139";
					 	cout<<"\n Name :-    	   NIKAM KAMLESH VILAS";	
					 	cout<<"\n Enrollment No :- 2000170105";
					 	break;
					 	
					 	case 140 :
			 			cout<<"\n Roll No :-       140";
					 	cout<<"\n Name :-          PATIL BHAVESH SUNIL";	
					 	cout<<"\n Enrollment No :- 2000170118";
					 	break;
					 	
					 	case 141 :
			 			cout<<"\n Roll No :-       141";
					 	cout<<"\n Name :-    	   PATIL CHETAN KIRAN";	
					 	cout<<"\n Enrollment No :- 2000170149";
					 	break;
					 	
					 	case 142 :
			 			cout<<"\n Roll No :-       142";
					 	cout<<"\n Name :-    	   PATIL CHETAN VIJUKANT";	
					 	cout<<"\n Enrollment No :- 2000170124";
					 	break;
					 	
					 	case 143 :
			 			cout<<"\n Roll No :-       143";
					 	cout<<"\n Name :-    	   PATIL HARSHVARDHAN MANOHAR";	
					 	cout<<"\n Enrollment No :- 2000170160";
					 	break;
					 	
					 	case 144 :
			 			cout<<"\n Roll No :-       144";
					 	cout<<"\n Name :-    	   PATIL HITESH SOPANDEV";	
					 	cout<<"\n Enrollment No :- 2000170128";
					 	break;
					 	
					 	case 145 :
			 			cout<<"\n Roll No :-       145";
					 	cout<<"\n Name :-    	   PATIL HITESH VIJAY";	
					 	cout<<"\n Enrollment No :- 2000170154";
					 	break;
					 	
					 	case 146 :
			 			cout<<"\n Roll No :-       146";
					 	cout<<"\n Name :-    	   PATIL KALYANI PRAMOD";	
					 	cout<<"\n Enrollment No :- 2000170099";
					 	break;
					 	
					 	case 147 :
			 			cout<<"\n Roll No :-       147";
					 	cout<<"\n Name :-    	   PATIL POOJA VIKAS";	
					 	cout<<"\n Enrollment No :- 2000170112";
					 	break;
					 	
					 	case 148 :
			 			cout<<"\n Roll No :-       148";
					 	cout<<"\n Name :-    	   PATIL SAURABH CHANDRAKANT";	
					 	cout<<"\n Enrollment No :- 2000170169";
					 	break;
					 	
					 	case 149 :
			 			cout<<"\n Roll No :-       149";
					 	cout<<"\n Name :-    	   PATIL VAISHNAVI PRAMOD";	
					 	cout<<"\n Enrollment No :- 2000170137";
					 	break;
					 	
					 	case 150 :
			 			cout<<"\n Roll No :-       150";
					 	cout<<"\n Name :-    	   PAWAR VISHAL SUNIL";	
					 	cout<<"\n Enrollment No :- 2000170138";
					 	break;
					 	
					 	case 151 :
			 			cout<<"\n Roll No :-       151";
					 	cout<<"\n Name :-    	   RAJPUT HEMANGI JITENDRASING";	
					 	cout<<"\n Enrollment No :- 2000170110";
					 	break;
					 	
					 	case 152 :
			 			cout<<"\n Roll No :-       152";
					 	cout<<"\n Name :-    	   RAJPUT PRATIKSHA DEVENDRASING";	
					 	cout<<"\n Enrollment No :- 2000170113";
					 	break;
					 	
					 	case 153 :
			 			cout<<"\n Roll No :-       153";
					 	cout<<"\n Name :-    	   SALUNKE YASH VIJAY";	
					 	cout<<"\n Enrollment No :- 2000170139";
					 	break;
					 	
					 	case 154 :
			 			cout<<"\n Roll No :-       154";
					 	cout<<"\n Name :-    	   SHENDRE SAMARTH MANISH";	
					 	cout<<"\n Enrollment No :- 2000170126";
					 	break;
					 	
					 	case 155 :
			 			cout<<"\n Roll No :-       155";
					 	cout<<"\n Name :-    	   SHEWALE DEVIKA UTTAM";	
					 	cout<<"\n Enrollment No :- 2000170155";
					 	break;
					 	
					 	case 156 :
			 			cout<<"\n Roll No :-       156";
					 	cout<<"\n Name :-    	   SHEWALE ISHA AVINASH";	
					 	cout<<"\n Enrollment No :- 2000170159";
					 	break;
					 	
					 	case 157 :
			 			cout<<"\n Roll No :-       157";
					 	cout<<"\n Name :-    	   SHINDE HITESH VINOD";	
					 	cout<<"\n Enrollment No :- 2000170109";
					 	break;
					 	
					 	case 158 :
			 			cout<<"\n Roll No :-       158";
					 	cout<<"\n Name :-    	   SONAWANE AJAY DEVIDAS";	
					 	cout<<"\n Enrollment No :- 2000170141";
					 	break;
					 	
					 	case 159 :
			 			cout<<"\n Roll No :-       159";
					 	cout<<"\n Name :-    	   SONAWANE DISHA DEEPAK";	
					 	cout<<"\n Enrollment No :- 2000170147";
					 	break;
					 	
					 	case 160 :
			 			cout<<"\n Roll No :-       160";
					 	cout<<"\n Name :-    	   SONAWANE NANDINI AJAY";	
					 	cout<<"\n Enrollment No :- 2000170";
					 	break;
					 	
						case 161 :
			 			cout<<"\n Roll No :-       161";
					 	cout<<"\n Name :-    	   SURWADE JAYESH SHANKAR";	
					 	cout<<"\n Enrollment No :- 2000170117";
					 	break;
					 	
					 	case 162 :
			 			cout<<"\n Roll No :-       162";
					 	cout<<"\n Name :-    	   TAKATE PARTH BHAGWAT";	
					 	cout<<"\n Enrollment No :- 2000170144";
					 	break;
					 	
					 	case 163 :
			 			cout<<"\n Roll No :-       163";
					 	cout<<"\n Name :-    	   TARGE PRACHI RAJESH";	
					 	cout<<"\n Enrollment No :- 2000170150";
					 	break;
					 	
					 	case 164 :
			 			cout<<"\n Roll No :-       164";
					 	cout<<"\n Name :-    	   THAKARE SAKSHI BAPU";	
					 	cout<<"\n Enrollment No :- 2000170106";
					 	break;
					 	
					 	case 165 :
			 			cout<<"\n Roll No :-       165";
					 	cout<<"\n Name :-    	   THAKUR TANUJA DNYANESHWAR";	
					 	cout<<"\n Enrollment No :- 2000170132";
					 	break;
					 	
					 	case 166 :
			 			cout<<"\n Roll No :-       166";
					 	cout<<"\n Name :-    	   THAKUR YOGESH ARJUN";	
					 	cout<<"\n Enrollment No :- 2000170101";
					 	break;
					 	
					 	case 167 :
			 			cout<<"\n Roll No :-       167";
					 	cout<<"\n Name :-    	   UPACHARYA DHIRAJKUMAR VIJAY";	
					 	cout<<"\n Enrollment No :- 2000170135";
					 	break;
					 	
					 	case 168 :
			 			cout<<"\n Roll No :-       168";
					 	cout<<"\n Name :-    	   WADILE PAYAL PRAKASH";	
					 	cout<<"\n Enrollment No :- 2000170152";
					 	break;
					 	
					 	case 169 :
			 			cout<<"\n Roll No :-       169";
					 	cout<<"\n Name :-    	   WAGH NARESH VIKAS";	
					 	cout<<"\n Enrollment No :- 2000170111";
					 	break;
					 	
					 	case 170 :
			 			cout<<"\n Roll No :-       170";
					 	cout<<"\n Name :-    	   GAVALE ANAND JAGDISH";	
					 	cout<<"\n Enrollment No :- 2000170275";
					 	break;

						 case 171 :
			 			cout<<"\n Roll No :-       170";
					 	cout<<"\n Name :-    	   GAVALE ANAND JAGDISH";	
					 	cout<<"\n Enrollment No :- 2000170275";
					 	break;

						 case 172 :
			 			cout<<"\n Roll No :-       170";
					 	cout<<"\n Name :-    	   GAVALE ANAND JAGDISH";	
					 	cout<<"\n Enrollment No :- 2000170275";
					 	break;

						 case 173 :
			 			cout<<"\n Roll No :-       170";
					 	cout<<"\n Name :-    	   GAVALE ANAND JAGDISH";	
					 	cout<<"\n Enrollment No :- 2000170275";
					 	break;

						 case 174 :
			 			cout<<"\n Roll No :-       170";
					 	cout<<"\n Name :-    	   GAVALE ANAND JAGDISH";	
					 	cout<<"\n Enrollment No :- 2000170275";
					 	break;

						 case 175 :
			 			cout<<"\n Roll No :-       170";
					 	cout<<"\n Name :-    	   GAVALE ANAND JAGDISH";	
					 	cout<<"\n Enrollment No :- 2000170275";
					 	break;
					 	 
					 	case 1 :
					 		exit(0);
					 	default :
					 		cout<<"Invalid Choise...Please Enter 101 To 170";
				}
		}
    }
};

int main()
{
 
  
    int p;
    
    
    
    College *c;
    
    cout<<"what do you want to choose"<<endl;
    cout<<" 1) Student Information "<<endl;
    cout<<" 2) Faculty Information "<<endl;
    cin>>p;
    
    if(p==1)
    {
      Student S;
       
    }
    else if(p==2)
    {
       
        Faculty f;
        c = &f;
        c->facultyInfo();
    }
    else 
    {
        cout<<"Enter Valid Option";
    }
    return 0;
}
