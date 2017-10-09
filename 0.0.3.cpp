template <typename Iterator1, typename Iterator2>
auto merge( Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output ) -> Iterator2
{
  do
  { 
  if(*first1<*first2)
    {
      *output = *first1;
      first1++;
      output++;
  }
  else
  {
  *output=*first2;
  first2++;
  output++;
} 
while ((first1 <= last1) || (first2 <= last2));
if(*last1<*last2)
      {
          *output = *last1:
          output++;
          *output = last2;
      }
else
{
      *output=*last2;
      output++;
      *output = *last1;
}
return output;
  
