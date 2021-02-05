#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void abroad();
void domestic();

void main()
{
    char name[50];
    int choice;
    printf("WELCOME TO TRAVELHUB!!! \n");
    printf("ENTER YOUR NAME: ");
    gets(name);
    printf("HELLO %s, would you like to travel abroad or in India \n", name);
    printf("select '1' for 'INTERNATIONAL' or select '2' for 'DOMESTIC': ");
    label:
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("we have three exclusive packages for you, in this category \n");
        printf(" 1. SWITZERLAND \n 2. PARIS \n 3. SINGAPORE \n");
        abroad();
    }
    else if(choice==2)
     {
        printf("we have three exclusive packages for you, in this category \n");
        printf(" 1. GOA \n 2. SHIMLA \n 3. KERALA \n");
        domestic();
    }
    else
    {
        printf("invalid choice, please select from 1 or 2");
        goto label;
    }

}

void abroad()
{
    int select;
     label1:
    printf("select '1 for SWITZERLAND, '2' for PARIS, '3' for SINGAPORE: ");
    scanf("%d", &select);
    if(select==1)
    {
      printf(" PACKAGE-1\n NOTE: THE PACKAGE INCUDES AIRFARE, ACCOMODATION, BREAKFAST AND DINNER AND SIGHTSEEING \n");
      printf("DAY-1 \n \n");
      printf("DEPARTURE: NEW DELHI AT 03:35 (IST) \n ARRIVAL: ZURICH AT 11:05 (IST) \n Have dinner at the magnificent IBIS Hotel situated in the heart of Zurich \n");
      printf("DAY-2 \n \n");
      printf("Breakfast and proceed for guided city tour: See scenic Switzerland from cottages to beaches. Spend time at leisure activities and return to hotel for dinner. \n");
      printf("DAY-3 \n \n");
      printf("Breakfast and proceed for adventurous ride at JUNGFRAUJOCH for encounter with ice and snow. Take a cogwheel train from LAUTERBRUNNEN to Europe's \n railway station. Have lunch in ice palace and visit Sphinx observatory to view glacier of Alps \n");
      printf("DAY-4\n \n");
      printf("Breakfast and proceed to Mt. TITLIS, highest peak in switzerland. Visit Lion monument and KAPELLBRUCKKE. You can also shop for Swiss souveneirs. \n Enjoying ride in Cable cars, and you can also take a stroll at cliff walk. \n");
      printf("DAY-5 \n \n");
      printf("Breakfast and proceed for photoshop for RHINE FALLS. See clock tower, Gothic fountains and parliament building. \n");
      printf("DAY-6 \n \n");
      printf("DEPARTURE: ZURICH AT 07:15 (IST) \n ARRIVAL: NEW DELHI AT 4:045 (IST) NEXT DAY \n \n \n");

      printf(" PACKAGE-2\n NOTE: THE PACKAGE INCUDES AIRFARE, ACCOMODATION, BREAKFAST AND DINNER AND SIGHTSEEING \n");
      printf("DAY-1 \n \n");
      printf("DEPARTURE: NEW DELHI AT 00:10 (IST) \n ARRIVAL: ZURICH AT 08:50 (IST) \n Have breakfast at the magnificent IBIS Hotel situated in the heart of Zurich and you can shop Swiss souveneirs in the afternoon. \n");
      printf("DAY-2 \n \n");
      printf("Breakfast and proceed to Mt. TITLIS, highest peak in switzerland. Visit Lion monument and KAPELLBRUCKKE. You can also shop for Swiss souveneirs. \n  Enjoying ride in Cable cars, and you can also take a stroll at cliff walk. \n");
      printf("DAY-3 \n \n");
      printf("Breakfast and proceed for guided city tour: See scenic Switzerland from cottages to beaches. Spend time at leisure activities and return to hotel for dinner. \n");
      printf("DAY-4 \n \n");
      printf("Breakfast and proceed for adventurous ride at JUNGFRAUJOCH for encounter with ice and snow. Take a cogwheel train from LAUTERBRUNNEN to Europe's \n railway station. Have lunch in ice palace and visit Sphinx observatory to view glacier of Alps \n");
      printf("DAY-5 \n \n");
      printf("Breakfast and proceed for photoshop for RHINE FALLS. See clock tower, Gothic fountains and parliament building");
      printf("DAY-6 \n \n");
      printf("DEPARTURE: ZURICH AT 14:40 (IST) \n ARRIVAL: NEW DELHI AT 4:45 (IST) NEXT DAY \n \n \n");

    }
    else if(select==2)
    {
        //itenary
    }
    else if(select==3)
    {
        //itenary
    }
    else
    {
        printf("invalid choice, please enter from 1,2,3 \n");
        goto label1;
    }
}
void domestic()
{
    int select1;
    label2:
     printf("select '1 for GOA, '2' for SHIMLA, '3' for KERALA");
    scanf("%d", &select1);
     if(select1==1)
    {
      //itenary
    }
    else if(select1==2)
    {
        //itenary
    }
    else if(select1==3)
    {
        //itenary
    }
    else
    {
        printf("invalid choice, please enter from 1,2,3 \n");
        goto label2;
    }
}
