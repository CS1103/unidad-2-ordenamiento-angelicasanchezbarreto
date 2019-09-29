//
// Created by lica-pc on 9/28/19.
//

#ifndef SORTMETHODS_COUNTRYTRADE_H
#define SORTMETHODS_COUNTRYTRADE_H

#include <iostream>
#include <string>


class CountryTrade {
public:
    string Country_Area;
    double Year;
    string Commodity;
    string Flow;
    double Trade_usd;


    CountryTrade();
    CountryTrade(const string &countryArea, double year, const string &commodity, const string &flow, double tradeUsd);
};


#endif //SORTMETHODS_COUNTRYTRADE_H
