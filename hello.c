#include <stdio.h>
#include <curl/curl.h>
int main(void)
{
  CURL *curl;
  CURLcode res;
  curl=curl_ easy_ init();
  if(curl){
    curl_ easy_ setopt(curl,CURLOPT_ URL, "http://myip. ipip.net/");
      res=cur1_ easy_ perform(curl);
      if(res !=CURLE_ 0K)
      fprintf(stderr, "curl_ easy_ perform() failed:%s\n",curl_ easy_ strerror(res));
      curl_ easy_ _cleanup(curl);
      return0;
      }
