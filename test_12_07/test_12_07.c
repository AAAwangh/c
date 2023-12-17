int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "abcdefg";
 
	char* arr3 = "abcdefg";
	char* arr4 = "abcdefg";
 
	if (arr1 == arr2)
		printf("arr1和arr2相等\n");
	else
		printf("arr1和arr2不相等\n");
 
	if(arr3 == arr4)
		printf("arr3和arr4相等\n");
	else
		printf("arr1和arr2不相等\n");
	return 0;
}