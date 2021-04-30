/*
/*
//---------------------------------------------
Name:              Armin Sharifiyan
Student ID:        130891203
Email:             asharifiyan1@myseneca.ca
Date:              3 / 18 / 2021
Workshop:          7
Part:              Lab
//----------------------------------------------
*/
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


namespace sdds {

	// Copies the srouce character string into the destination
	void strCpy(char* des, const char* src) {

		while (*src != '\0')
		{
			*des = *src;
			des++;
			src++;
		}
		*des = '\0';
	}
	int strCmp(const char* s1, const char* s2) {

		int result = 0;

		while (result == 0)
		{
			if (s1 > s2)
			{
				result = 1;
			}
			else if (s1 < s2)
			{
				result = -1;
			}
			if (*s1 == '\0' || *s2 == '\0')
			{
				break;
			}
		}
		return result;
	}

}
