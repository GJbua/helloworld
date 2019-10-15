#include <stdio.h>
#include <curl/curl.h>
int main(void)
{
  CURL *curl;
  CURLcode res;
  curl=curl_easy_init();
  if(curl){
    curl_easy_setopt(curl,CURLOPT_URL, "http://myip. ipip.net/");
      res=cur1_easy_perform(curl);
      if(res !=CURLE_0K)
      fprintf(stderr, "curl_easy_ perform() failed:%s\n",curl_easy_strerror(res));
      curl_easy_cleanup(curl);
      return 0;
      }
