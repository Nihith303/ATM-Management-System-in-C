#include<stdio.h>
#include<time.h>
#include<stdlib.h>
enum type{dep=1,tra,chag,oth,fas,bala,wit,mini};
#define out printf
#define in scanf
int main()
{
	srand(time(NULL));
	time_t now;
	time(&now);
	enum type encho;
	const int en2=500;
	unsigned short p=7389,oc,en1,otp,setpin,setpin1,pin,i=0,en,pin1,cpin,cpin1,en3,otp1;
	unsigned int amt,sbal=30400,cbal=500000,z,b,d,s;
	unsigned long long acc,acc1;
	char ent,ch,cha,yn,E,E1,N,otpc;
	out("\tInsert Your Card\n");
	out("\tPress Enter to Continue\n");
	in("%c",&ent);
	rock:
	out("\t\t1.Enter Atm Pin\n\t\t2.Generate OTP\n\n");
	in("%hu",&en1);
		switch(en1)
		{
			case 1:
			abcd:
			if(i<3)
			out("\nEnter the 4-Digit pin\n\t");
			else{
			out("Your card is blocked temporarily for more information contact our bank customer care\n");
			goto ell;
			}
			in("%hu",&pin);
			if(pin<=9999&&pin>999)
			break;
			else
			goto abcd;
			case 2:
			out("An OTP has been sent\n");
			p=p+10000;
			Uday:
			otp1=(rand()%(9999-1001))+1001;
			out("\t\t\tThe otp is %i\n",otp1);
			out("Enter the OTP\n");
			scanf("%hu",&otp);
			if(otp==otp1){
			 a:
			 out("Please enter the pin you want to set\n");
			 in("%hu",&setpin);
			 if(setpin<=9999&&setpin>999){
			 out("Confirm the pin\n");
			 in("%hu",&setpin1);
			 }
			 else{
			 goto a;
			 }
			 if(setpin==setpin1){
			 out("Your Atm pin has been set\n\n\n");
			 out("Do you want do any other transaction[y/n]:");
			 fflush(stdin);//To flush the enter charater which is stored in above scanf.
			 in("%c",&cha);
			 if(cha=='y'||cha=='Y'){
			 Nihith:	
			 out("Enter the pin\n");
			 in("%hu",&pin);
			 if(pin==setpin)
			 goto nn;
			 else{
			 	out("Incorrect pin\n");
			 	goto Nihith;
			 }
			 }
			 else
			 out("\a\a\aPlease Take your card");
			 break;
			 }
			 else{
			out("The Pin is Unmatched\n");
			 goto a;
			 }
			}
			else{
				out("Incorrect otp\n");
				out("Press 'R' to resend the otp\n");
				fflush(stdin);
				in("%c",&otpc);
				if(otpc=='r'||otpc=='R')
				goto Uday;
				else
				goto ell;
			}
			default:
				goto ell;
		}
		if(en1==1){
			nn:
			out("1.Deposite\t5.fast cash\n2.transfer\t6.Balance Enquiry\n");
			out("3.Changepin\t7.Withdraw\n4.Other\t\t8.Ministatement\n");
			in("%ui",&encho);
			if(encho>=1&&encho<=8)
			out("\n");
			else{
				out("Invalide Entry\n");
				goto nn;
			}
		switch(encho)
		{
			case dep:
			out("Name:Jonnalagadda Nihith\n");
			out("Account Number:9546 3783 5674 3157\n");
			out("Press 'C' to continue\nenter any other key to discontinue\n");
			fflush(stdin);
			in("%c",&ch);
			if(ch=='C'||ch=='c'){
			emo:
			out("\t\t1.Savings account\n\t\t2.Current account\n");
			in("%hu",&en);
			Z:
			out("Please place the money in the below box\n");
			out("Please Enter the total money you deposited\n");
			in("%ui",&amt);
			if(p==pin||pin==setpin){
				if(amt%100==0){
				if(en==1){
				out("%i has been deposited into your account\n",amt);
				out("Total balance in your account is\n\t\t%u",sbal+amt);
				 }
				else if(en==2){
				out("%i has been deposited into your account\n",amt);
				out("Total balance in your account is\n\t\t%u",cbal+amt);
				 }
				else {
					out("Invalid choice\n");
					goto emo;
				}
				}
				else{
					out("Please take your money\n");
					out("Please Place the money which is multiple of 100\n");
					goto Z;
				}
			}
			else{
				out("wrong pin\n");
				i++;
				goto abcd;
			}
			}
			else
			out("\n\n\t\tThank you for visiting\a\a");
			out("\n\nplease Collect your card\a\a");
			break;
			case tra:
				out("Enter the account from which u want to transfer\n");
				out("\t\t1.Saving\n\t\t2.current\n");
				in("%i",&en);
				am:
				out("Enter the 16-Digit account number you want to send money\n");
				in("%Lu",&acc);
				out("Confirm the account number\n");
				in("%Lu",&acc1);
				if(acc==acc1){
				out("Name:KETHEPALLI GOKUL\n");
				out("Do u want continue[y/n]:");
				fflush(stdin);
				in("%c",&yn);
				if(yn=='y'||yn=='Y'){
			     out("Enter the Amount you want to Transfer\n");
				 in("%ui",&amt);
				 if(en==1){
				 if(amt<=sbal)
				 out("\n");
				 else{
				 out("Insufficent Balance");
				 break;
				 }
			     if(p==pin||pin==setpin){
			 	 out("%u has been sent to the given account\n ",amt);
			 	 printf("Remaining Balance in your savings account is \n\t\t %u",sbal-amt);
			 	}
			 	 else {
				out("Wrong pin\n");
				i++;
				goto abcd;
				}
				}
				if(en==2){
				 if(amt<=cbal)
				 out("\n");
				 else{
				 out("Insufficent Balance");
				 break;
				 }
			     if(p==pin||pin==setpin){
			 	 out("%u has been sent to the given account ",amt);
			 	 printf("Remaining Balance in your current account is \n\t\t %u",cbal-amt);
			 	 }
			 	 else {
				out("Wrong pin\n");
				i++;
				goto abcd;
				}
				}
				}
				}
				else{
				out("You have entered to different account numbers\nPlease enter the account number again\n\n");
				goto am;
				}
				out("\n\nPlease Collect your card\a\a");
				break;
			case chag:
				gokul:
				out("Enter the pervious pin\n");
				in("%hu",&pin1);
				if(pin1==p||pin==setpin){
				abc:
				out("Enter the pin you want to change:");
				in("%hu",&cpin);
				out("Confirm the pin:");
				in("%hu",&cpin1);
				}
				else
				goto gokul;
				if(cpin==cpin1)
				out("Your atm pin has been change to %hi\n",cpin1);
				else{
				out("You have entered two different pins\nRe-enter the pin again\n");
				goto abc;
				}
				out("\n\nPlease collect your card\a\a");
				break;
			case oth:
				if(p==pin||pin==setpin){
				rajasekhar:
				out("\t\t1.T.N Property tax\n\t\t2.Instant Fee payment\n");
				in("%hu",&oc);
				qw:
				out("\t\t1.Saving\n\t\t2.current\n");
				in("%hu",&en);
				if(en==1||en==2){
				if(oc==1){
					out("Zone No\n");
					in("%u",&z);
					out("Division Code\n");
					in("%u",&d);
					out("Bill No\n");
					in("%u",&b);
					out("Sub No\n");
					in("%u",&s);
					out("Total tax need to pay is 5000\n");
					out("Press Enter to pay the Tax\n");
					fflush(stdin);
					in("%c",&E);
					out("Your property tax has beenn payed\n");
					if(en==1)
					out("Total Balance is %u",sbal-5000);
					else
					out("Total Balance is %u",cbal-5000);
				}
				else if(oc==2){
					out("Enter the account number\nOf education institution\n");
					in("%Lu",&acc);
					out("\t\tKalasalingam university\n");
					out("Press Enter to continue\n");
					fflush(stdin);
					in("%c",&E1);
					out("Enter the fee to pay:");
					in("%u",&amt);
					if(en==1&&amt<=sbal||en==2&&amt<=cbal){
						out("Enter 'C' to pay the fee\n");
						fflush(stdin);
						in("%c",&N);
						if(N=='c'||N=='C'){
						out("Your Fee has been payed\n");
						if(en==1)
						out("Total Balance in your account is %u",sbal-amt);
						else
						out("Total balance in your account is %u",cbal-amt);
						}
						else
						break;
					}
					else{
					out("Insufficient Balance\n");
					out("Please Take your card");
					}
					break;
				}
				else{
					out("Invalid Chioce\n");
					goto rajasekhar;
				}
				}
				else
				goto qw;
				}
				else{
					out("Wrong pin\n");
				goto abcd;
				}
				out("\n\nPlease Collect your card\a\a");
				break;
			case fas:
				out("Process your transaction please wait\n\n\n");
				if(p==pin||pin==setpin)
				out("\a\aCollect your money %hu\n\n",en2);
				else{
					out("Wrong pin\n");
					i++;
					goto abcd;
				}
				out("\n\nPlease collect your card\a\a");
				break;
			case bala:
				g:
				out("\t\t1.Saving\n\t\t2.Current\n");
				in("%hu",&en);
				if(en==1||en==2){
				out("Please wait processing your request\n");
				if(p==pin||pin==setpin)
				out("Total amount in your account\n");
				else{
					out("Wrong pin Re-enter the pin");
					i++;
					goto abcd;
				}
				}
				else{
					out("Invalid chioce");
					goto g;
				}
				if(en==1)
				out("\t\t%i",sbal);
				else if(en==2)
				out("\t\t%i",cbal);
				out("\n\nPlease Collect your card\a\a");
				break;
			case wit:
				manoj:
				out("\t\t1.Saving account\n\t\t2.Current account\n");
				in("%hu",&en);
				if(en==1||en==2){
				no:
				out("\t\t\tEnter the amount you want to withdraw\n");
				in("%hu",&en3);
				if(p==pin||pin==setpin){
				if(en3<=10000){
					if(en3%100==0)
					printf("\a");
					else{
					out("Enter the amount which is multiple of 100\n");
					goto no;
					}
				}
				else{
				out("You have entered more amount than the ATM Limit\n");
				goto no;
				}
				}
				else{
					out("Wrong pin\n");
					i++;
					goto abcd;
				}
				out("Please wait your transaction is being process\n");
				out("\a\a\a\a\a\a");
				out("\t\tPlease collect your money %hu\n",en3);
				out("\t\tPlease Take your card\n\n\n\n\n");
				out("\t\t---------------Receipt------------\n");
				out("\t\tDay Mon Date Time  Year\n");
				out("\t\t-----------------------\n");
				out("\t\t%s",ctime(&now));
				if(en==1){
				out("\t\tTotal amount before withdrawal \n\t\t %u\n",sbal);
				out("\t\ttotal amount after withdrawal \n\t\t %u",sbal-en3);
				 }
				else if(en==2){
				out("\t\tTotal amount before withdrawal \n\t\t %u\n",cbal);
				out("\t\ttotal amount after withdrawal \n\t\t %u",cbal-en3);
				 }
				 }
				 else{
				 	out("Invalid Chioce\n");
				 	goto manoj;
				 }
				 out("\n\nPlease Collect yuour card\a\a");
				break;
			case mini:
				bharathi:
				out("\t\t1.Saving\n\t\t2.Current\n");
				scanf("%hu",&en);
				if(en==1||en==2){
				if(p==pin||setpin==pin){
				out("Day Mon Date Time   Year\n");
				out("------------------------\n");
				out("%s",ctime(&now));
				out("Card Number:6091********8504\n");
				out("TXN:\t\t7224\n");
				out("MINI sTMT FOR\t\tXXXXXXXX3890\n");
				out("30/11\tMFT\tC\t  1000.00\n");
				out("30/11\tMFT\tC\t  60.40\n");
				out("30/11\tMFT\tC\t  60.00\n");
				out("29/11\tMFT\tC\t  100.00\n");
				out("29/11\tMFT\tC\t  2000.00\n");
				out("28/11\tATM\tC\t  800.00\n");
				out("26/11\tATM\tC\t  400.00\n");
				out("26/11\tMFT\tC\t  1000.00\n");
				out("25/11\tATM\tC\t  900.00\n");
				if(en==1)
				out("\tBAL %u",sbal);
				else if(en==2)
				out("\tBAL %u",cbal);
				}
				else{
					out("Wrong pin\n");
					i++;
					goto abcd;
				}
				}
				else{
					out("Invalid Chioce\n");
					goto bharathi;
				}
				out("\n\nPlease Collect your card\a\a");
				break;
		}
		}
		else
		ell:
		out("\a\a\aPlease Remove the card");
	return 0;
}
/*
Created by J.Nihit..
creation time 22-11-2022..
About code :-ATM Management system
*/
