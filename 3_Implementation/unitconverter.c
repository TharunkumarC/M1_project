#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include"unit.h"
  
int main() {
  char List;
  printf("**********Welcome to Unit Converter********** \n");
  printf("list of conversations Avaliable: \n");
  printf("1.Temperature\n2.Currency\n3.Mass \n");
  printf("Enter the Number that you want to convert.\n");
  scanf("%c",&List);
  
  if(List == '1'){
      printf("-----Welcome to Temperature Converter----- \n");
      printf("list of conversations Avaliable: \n");
      printf("1.Fahrenheit Â°F to Celsius Â°C. \n");
      printf("2.Celsius Â°C to Fahrenheit Â°F. \n");
      printf("3.Celsius Â°C to Kelvin k. \n");
      scanf("%d",&temp);
      if(temp == 1){
          printf("Enter the Fahrenheit Â°F: \n");
          scanf("%d",&inputF);
          FahrenheitToCelsius =  ((inputF-32) * (5.0/9.0));
          printf("Celsius: %d",FahrenheitToCelsius);
      }
      else if(temp == 2){
        printf("Enter the Celcius Â°C: \n");
        scanf("%d",&inputC);
        CelsiusToFahrenheit = ((9.0/5.0)*inputC + 32);
        printf("Fahrenheit Â°F: %.2f",CelsiusToFahrenheit);
      }
      else if(temp == 3){
        printf("Enter the Celcius Â°C: \n");
        scanf("%d",&inputC);
        CelsiustoKelvin = (inputC+273.15);
        printf("Kelvin k: %.2f",CelsiustoKelvin);
      }
      else
        printf("Enter the Value \n");
  }
  
  else if(List == '2') {
      printf("-----Welcome to Currency Converter----- \n");
      printf("list of conversations Avaliable: \n");
      printf("1.USD to Euro. \n");
      printf("2.USD to JPY. \n");
      printf("3.USD to INR. \n");
      scanf("%d",&currency);
      if(currency == 1){
          printf("Enter the USD: \n");
          scanf("%d",&inputUSDtoEuro);
          USDtoEURO = inputUSDtoEuro * 0.90;
          printf("Euro: %.2f",USDtoEURO); 
      }
      else if(currency == 2){
          printf("Enter the USD: \n");
          scanf("%d",&inputUSDtoJPY);
          USDtoJPY = inputUSDtoJPY * 122.58;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currency == 3) {
        printf("Enter the USD: \n");
        scanf("%d",&inputUSDtoINR);
        USDtoINR = inputUSDtoINR * 75.82;
        printf("INR: %.2f",USDtoINR);
      }
      else
        printf("Enter the Value. \n");
   }
  else if(List == '3'){
      printf("-----Welcome to Mass Converter----- \n");
      printf("list of conversations Avaliable: \n");
      printf("1.Ounces to Pounds. \n");
      printf("2.Gram to Pounds. \n");
      printf("3.Tonne to Pounds. \n");
      scanf("%d",&mass);
      if(mass == 1){
          printf("Enter the ounce Value: \n");
          scanf("%d",&inputOunce);
          OunceToPounds = inputOunce * 0.0625;
          printf("Pounds: %.4f",OunceToPounds);
      }
      else if(mass == 2) {
          printf("Enter the Gram Value: \n");
          scanf("%d",&inputGram);
          GramsToPounds = inputGram * 0.00220462;
          printf("Pounds: %.4f",GramsToPounds);
      }
      else if(mass == 3) {
          printf("Enter the Tonne Value: \n");
          scanf("%d",&inputTonne);
          TonnetoPounds = inputTonne * 2204.62262;
          printf("Pounds: %.4f",TonnetoPounds);
      }
      else 
        printf("Enter the Value. \n");
   }
  return 0;
}