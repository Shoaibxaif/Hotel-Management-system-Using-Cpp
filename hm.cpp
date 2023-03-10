#include <iostream>
using namespace std;
int main()
{
   int quant;
   int choice;

   // total quantity we have
   int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

   // total quantity we sold
   int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

   // total price of items
   int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

   // number of items for bill

   int nroom, npasta, nburger, nnoodle, nshake, nchicken;

   cout << "\n-------------------------[ Quantity of Items ]-------------------------\n";

   cout << "Rooms Available: " << endl;
   cin >> Qrooms;
   cout << "Quantity of Pasta: " << endl;
   cin >> Qpasta;
   cout << "Quantity of Burger: " << endl;
   cin >> Qburger;
   cout << "Quantity of Noodles: " << endl;
   cin >> Qnoodles;
   cout << "Quantity of Shakes: " << endl;
   cin >> Qshake;
   cout << "Quantity of Chicken-Roll: " << endl;
   cin >> Qchicken;

c:

   char name[30], address[50], state[20], email[30], country[20], distt[20];
   int age, mob_no;

   int newcustomer;
   cout << "\nPress 1 to continue with New customer: ";
   cin >> newcustomer;

   if (newcustomer == 1)
   {
      cout << "\n-------------------------[ Enter Customer Details ]-------------------------\n";

      cout << "Enter Name        : ";
      cin >> name;
      cout << "Enter age         : ";
      cin >> age;
      cout << "Enter Email       : ";
      cin >> email;
      cout << "Enter Contact No  : ";
      cin >> mob_no;
      cout << "Enter Address     : ";
      cin >> address;
      cout << "Enter Distt       : ";
      cin >> distt;
      cout << "Enter State       : ";
      cin >> state;
      cout << "Enter Country     : ";
      cin >> country;

      goto m;
   }

m:

   cout << "\n-------------------------[ Please select from the menu options ]-------------------------\n";

   cout << "1) Rooms" << endl;
   cout << "2) Pasta" << endl;
   cout << "3) Burger" << endl;
   cout << "4) Noodles" << endl;
   cout << "5) Shakes" << endl;
   cout << "6) Chicken-Roll" << endl;
   cout << "7) Generate Bill" << endl;
   cout << "8) Exit" << endl;

   cout << "\n-------------------------[ Please Enter YOur Choice ]-------------------------\n";
   cin >> choice;

   switch (choice)
   {
   case 1:
      cout << "Enter The Number Of Rooms you want :";
      cin >> quant;

      if (Qrooms - Srooms >= quant)
      {
         Srooms = Srooms + quant;
         Total_rooms = Total_rooms + quant * 1200;

         if (quant == 1)
         {
            cout << "\n\n"
                 << quant << " Room have been allocated to " << name;
         }
         else
            cout << "\n\n"
                 << quant << " Rooms have been allocated to " << name;
      }
      else
         cout << "\nOnly" << Qrooms - Srooms << " Rooms remaining in Hotel ";

      cout << "\n------------------------------------------------------------------------------------\n";
      break;

   case 2:
      cout << "Enter Pasta Quantity :";
      cin >> quant;

      if (Qpasta - Spasta >= quant)
      {
         Spasta = Spasta + quant;
         Total_pasta = Total_pasta + quant * 250;
         cout << "\n\n"
              << quant << " Pasta is the order";
      }
      else
         cout << "\nOnly" << Qpasta - Spasta << " Pasta remaining in Hotel ";

      cout << "\n------------------------------------------------------------------------------------\n";
      break;

   case 3:
      cout << "Enter Burger Quantity :";
      cin >> quant;

      if (Qburger - Sburger >= quant)
      {
         Sburger = Sburger + quant;
         Total_burger = Total_burger + quant * 120;
         cout << "\n\n"
              << quant << " Burger is the order";
      }
      else
         cout << "\nOnly" << Qburger - Sburger << " Burger remaining in Hotel ";

      cout << "\n------------------------------------------------------------------------------------\n";
      break;
   case 4:
      cout << "Enter Noodles Quantity :";
      cin >> quant;

      if (Qnoodles - Snoodles >= quant)
      {
         Snoodles = Snoodles + quant;
         Total_noodles = Total_noodles + quant * 299;
         cout << "\n\n"
              << quant << " Noodles is the order";
      }
      else
         cout << "\nOnly" << Qnoodles - Snoodles << " Noodles remaining in Hotel ";

      cout << "\n------------------------------------------------------------------------------------\n";
      break;

   case 5:
      cout << "Enter Shakes Quantity :";
      cin >> quant;

      if (Qshake - Sshake >= quant)
      {
         Sshake = Sshake + quant;
         Total_shake = Total_shake + quant * 199;
         cout << "\n\n"
              << quant << "Shake is the order";
      }
      else
         cout << "\nOnly" << Qshake - Sshake << " Shake remaining in Hotel ";

      cout << "\n------------------------------------------------------------------------------------\n";
      break;

   case 6:
      cout << "Enter Chicken-Roll Quantity :";
      cin >> quant;

      if (Qchicken - Schicken >= quant)
      {
         Schicken = Schicken + quant;
         Total_chicken = Total_chicken + quant * 399;
         cout << "\n\n"
              << quant << "Chicken-Roll is the order";
      }
      else
         cout << "\nOnly" << Qchicken - Schicken << " Chicken-Roll remaining in Hotel ";

      cout << "\n------------------------------------------------------------------------------------\n";
      break;

   case 7:

      nroom = Total_rooms / 1200;
      npasta = Total_pasta / 250;
      nburger = Total_burger / 120;
      nnoodle = Total_noodles / 299;
      nshake = Total_shake / 199;
      nchicken = Total_chicken / 399;

      cout << "\n-------------------------[ Customer Bill ]-------------------------\n";

      cout << "\nName        : " << name;
      cout << "\nage         : " << age;
      cout << "\nEmail       : " << email;
      cout << "\nContact No  : " << mob_no;
      cout << "\nAddress     : " << address << ","
           << "Distt-" << distt << "," << state << "," << country << endl;

      if (nroom > 0)
      {
         cout << "\n\n1.\t" << nroom << " x Room             = " << Total_rooms << endl;
      }

      if (npasta > 0)
      {
         cout << "2.\t" << npasta << " x Pasta            = " << Total_pasta << endl;
      }

      if (nburger > 0)
      {
         cout << "3.\t" << nburger << " x Burger           = " << Total_burger << endl;
      }
      
      if (nnoodle > 0)
      {
         cout << "4.\t" << nnoodle << " x Noodles          = " << Total_noodles << endl;
      }
      
      if (nshake > 0)
      {
         cout << "5.\t" << nshake << " x Shake            = " << Total_shake << endl;
      }
      
      if (nchicken > 0)
      {
          cout << "6.\t" << nchicken << " x Chicken-Rolls    = " << Total_chicken << endl;
      }
      

      
      cout << "\n----------------------------------------------------------\n";
      cout << "TOTAL AMOUNT Rs " << Total_rooms + Total_burger + Total_chicken + Total_noodles + Total_pasta + Total_shake;
      cout << "\n----------------------------------------------------------\n";
      cout << "\nThankyou ! Have a good Day" << endl;
      cout << "Visit Again" << endl;
      goto c;

   case 8:
      exit(0);

   default:

      cout << "\nPlease Select the numbers mentioned above" << endl;
      break;
   }

   goto m;

   return 0;
}