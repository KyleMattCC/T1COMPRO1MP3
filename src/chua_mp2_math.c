/***************************************************************************/
/* COMPRO1 Machine Problem Part 2                                          */
/* CHUA_KYLE MATTHEW C.                  				                   */
/* S19A                                					                   */  
/*                                                                         */
/* This file should contain the function DEFINITION of the                 */
/* mp1_math functions.                                                     */
/*                                                                         */
/* NOTES:                                                                  */
/* 1. Change the word "lastname" in the filename to your own last name.    */
/*    For example, if your last name is SANTOS, then this file should be   */
/*    named as santos_mp2_math.c                                           */ 
/* 2. Your main task is to implement/fill-up the body of the functions.    */
/* 3. You also need to compile this source code separately to produce      */
/*    the object file.                                                     */
/* 4. The following are NOT ALLOWED:                                       */
/*    a. addition of  new codes other than the implementation of the body  */  
/*       of the functions and the entries in this preamble                 */
/*    b. changing the #define                                              */
/*    c. changing the return type, function name and parametrizations      */
/*    d. calling output function such as printf() - do not output anything */
/*       inside the function definitions!                                  */
/***************************************************************************/

#include "mp2_math.h"
#define NUMBER_OF_TERMS 10

/* computes and returns the value of x raised to n */
double RaiseTo(double x, int n)
{
    int i;
    double temp;
    
    temp=1;

    for(i=0; i<n; i++)
                    temp*=x;

    return temp;
}


/* computes and returns the value of the factorial of n */
double factorial(int n)
{
    int i;
    double factored;

    factored=n;

    for(i=1; i<n; i++){
	           factored*=i;
	}

    return factored;
}


/* computes and returns the value of the cosine of angle x */
/* note that x is in radians                   */
double cosine(double x)
{
    int ctr, n=2;
    double final=1;

    for(ctr=1;ctr<NUMBER_OF_TERMS;ctr++){
	if(n%4==2)
		final -= (RaiseTo(x,n)/factorial(n));
	else
		final += (RaiseTo(x,n)/factorial(n));
	n+=2;
    }	

    return final;
}

/*  computes and returns the value of the sine of angle x */
/*  note that x is in radians */
double sine(double x)
{
    int ctr, n=3;
    double final=x;

    for(ctr=1;ctr<NUMBER_OF_TERMS;ctr++){
	if(n%4==3)
		final -= (RaiseTo(x,n)/factorial(n));
	else
		final += (RaiseTo(x,n)/factorial(n));
	n+=2;
    }	

    return final;
}

