// RoMan-Tools.cpp : Defines the entry point for the console application.
//

#include <boost/regex.hpp>
#include <iostream>
#include <string>
#include "md5.h"
#include "sha256.h"


// Problem with using Boost Library, cannot open libboost_regex-vc140-mt-gd-1_62.lib

int main()
{
	std::string line;
	boost::regex pat("^Subject: (Re: |Aw: )*(.*)");

	while (std::cin)
	{
		std::getline(std::cin, line);
		boost::smatch matches;
		if (boost::regex_match(line, matches, pat))
			std::cout << matches[2] << std::endl;
	}
}