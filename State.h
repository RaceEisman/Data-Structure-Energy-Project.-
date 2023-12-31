#ifndef DATASTRUCTURES_GROUP109_FINALPROJECT_STATE_H
#define DATASTRUCTURES_GROUP109_FINALPROJECT_STATE_H

#include <string>

using namespace std;

struct State {

    int production_coal;
    int consumption_commercial_coal;
    int consumption_commercial_distillateFuelOil;
    int consumption_commercial_geothermal;
    int consumption_commercial_hydropower;
    int consumption_commercial_kerosene;
    int consumption_commercial_petroleum;
    int consumption_commercial_naturalGas;
    int consumption_commercial_solar;
    int consumption_commercial_wind;
    int consumption_commercial_wood;
    int consumption_electricPower_coal;
    int consumption_electricPower_distillateFuelOil;
    int consumption_electricPower_naturalGas;
    int consumption_electricPower_wood;
    int consumption_industrial_coal;
    int consumption_industrial_distillateFuelOil;
    int consumption_industrial_geothermal;
    int consumption_industrial_hydropower;
    int consumption_industrial_kerosene;
    int consumption_industrial_petroleum;
    int consumption_industrial_naturalGas;
    int consumption_industrial_otherPetroleumProducts;
    int consumption_industrial_solar;
    int consumption_industrial_wind;
    int consumption_industrial_wood;
    int consumption_refinery_coal;
    int consumption_refinery_distillateFuelOil;
    int consumption_refinery_naturalGas;
    int consumption_residential_coal;
    int consumption_residential_distillateFuelOil;
    int consumption_residential_geothermal;
    int consumption_residential_kerosene;
    int consumption_residential_petroleum;
    int consumption_residential_naturalGas;
    int consumption_residential_wood;
    int consumption_transportation_coal;
    int consumption_transportation_distillateFuelOil;
    int consumption_transportation_petroleum;
    int consumption_transportation_naturalGas;
    int expenditure_commercial_coal;
    int expenditure_commercial_distillateFuelOil;
    int expenditure_commercial_kerosene;
    int expenditure_commercial_petroleum;
    int expenditure_commercial_naturalGas;
    int expenditure_electricPower_coal;
    int expenditure_electricPower_distillateFuelOil;
    int expenditure_electricPower_naturalGas;
    int expenditure_industrial_coal;
    int expenditure_industrial_distillateFuelOil;
    int expenditure_industrial_kerosene;
    int expenditure_industrial_petroleum;
    int expenditure_industrial_naturalGas;
    int expenditure_industrial_otherPetroleumProducts;
    int expenditure_residential_coal;
    int expenditure_residential_distillateFuelOil;
    int expenditure_residential_kerosene;
    int expenditure_residential_petroleum;
    int expenditure_residential_naturalGas;
    int expenditure_residential_wood;
    int expenditure_transportation_coal;
    int expenditure_transportation_distillateFuelOil;
    int expenditure_transportation_petroleum;
    int expenditure_transportation_naturalGas;
    int price_commercial_coal;
    int price_commercial_distillateFuelOil;
    int price_commercial_kerosene;
    int price_commercial_petroleum;
    int price_commercial_naturalGas;
    int price_electricPower_coal;
    int price_electricPower_distillateFuelOil;
    int price_electricPower_naturalGas;
    int price_industrial_coal;
    int price_industrial_distillateFuelOil;
    int price_industrial_kerosene;
    int price_industrial_petroleum;
    int price_industrial_naturalGas;
    int price_industrial_otherPetroleumProducts;
    int price_transportation_coal;
    int price_transportation_distillateFuelOil;
    int price_transportation_petroleum;
    int price_transportation_naturalGas;

    State(int production_coal, int consumption_commercial_coal, int consumption_commercial_distillateFuelOil, int consumption_commercial_geothermal, int consumption_commercial_hydropower, int consumption_commercial_kerosene, int consumption_commercial_petroleum, int consumption_commercial_naturalGas, int consumption_commercial_solar, int consumption_commercial_wind, int consumption_commercial_wood, int consumption_electricPower_coal, int consumption_electricPower_distillateFuelOil, int consumption_electricPower_naturalGas, int consumption_electricPower_wood, int consumption_industrial_coal, int consumption_industrial_distillateFuelOil, int consumption_industrial_geothermal, int consumption_industrial_hydropower, int consumption_industrial_kerosene, int consumption_industrial_petroleum, int consumption_industrial_naturalGas, int consumption_industrial_otherPetroleumProducts, int consumption_industrial_solar, int consumption_industrial_wind, int consumption_industrial_wood, int consumption_refinery_coal, int consumption_refinery_distillateFuelOil, int consumption_refinery_naturalGas, int consumption_residential_coal, int consumption_residential_distillateFuelOil, int consumption_residential_geothermal, int consumption_residential_kerosene, int consumption_residential_petroleum, int consumption_residential_naturalGas, int consumption_residential_wood, int consumption_transportation_coal, int consumption_transportation_distillateFuelOil, int consumption_transportation_petroleum, int consumption_transportation_naturalGas, int expenditure_commercial_coal, int expenditure_commercial_distillateFuelOil, int expenditure_commercial_kerosene, int expenditure_commercial_petroleum, int expenditure_commercial_naturalGas, int expenditure_electricPower_coal, int expenditure_electricPower_distillateFuelOil, int expenditure_electricPower_naturalGas, int expenditure_industrial_coal, int expenditure_industrial_distillateFuelOil, int expenditure_industrial_kerosene, int expenditure_industrial_petroleum, int expenditure_industrial_naturalGas, int expenditure_industrial_otherPetroleumProducts, int expenditure_residential_coal, int expenditure_residential_distillateFuelOil, int expenditure_residential_kerosene, int expenditure_residential_petroleum, int expenditure_residential_naturalGas, int expenditure_residential_wood, int expenditure_transportation_coal, int expenditure_transportation_distillateFuelOil, int expenditure_transportation_petroleum, int expenditure_transportation_naturalGas, int price_commercial_coal, int price_commercial_distillateFuelOil, int price_commercial_kerosene, int price_commercial_petroleum, int price_commercial_naturalGas, int price_electricPower_coal, int price_electricPower_distillateFuelOil, int price_electricPower_naturalGas, int price_industrial_coal, int price_industrial_distillateFuelOil, int price_industrial_kerosene, int price_industrial_petroleum, int price_industrial_naturalGas, int price_industrial_otherPetroleumProducts, int price_transportation_coal, int price_transportation_distillateFuelOil, int price_transportation_petroleum, int price_transportation_naturalGas)
    {

        this->production_coal = production_coal;
        this->consumption_commercial_coal = consumption_commercial_coal;
        this->consumption_commercial_distillateFuelOil = consumption_commercial_distillateFuelOil;
        this->consumption_commercial_geothermal = consumption_commercial_geothermal;
        this->consumption_commercial_hydropower = consumption_commercial_hydropower;
        this->consumption_commercial_kerosene = consumption_commercial_kerosene;
        this->consumption_commercial_petroleum = consumption_commercial_petroleum;
        this->consumption_commercial_naturalGas = consumption_commercial_naturalGas;
        this->consumption_commercial_solar = consumption_commercial_solar;
        this->consumption_commercial_wind = consumption_commercial_wind;
        this->consumption_commercial_wood = consumption_commercial_wood;
        this->consumption_electricPower_coal = consumption_electricPower_coal;
        this->consumption_electricPower_distillateFuelOil = consumption_electricPower_distillateFuelOil;
        this->consumption_electricPower_naturalGas = consumption_electricPower_naturalGas;
        this->consumption_electricPower_wood = consumption_electricPower_wood;
        this->consumption_industrial_coal = consumption_industrial_coal;
        this->consumption_industrial_distillateFuelOil = consumption_industrial_distillateFuelOil;
        this->consumption_industrial_geothermal = consumption_industrial_geothermal;
        this->consumption_industrial_hydropower = consumption_industrial_hydropower;
        this->consumption_industrial_kerosene = consumption_industrial_kerosene;
        this->consumption_industrial_petroleum = consumption_industrial_petroleum;
        this->consumption_industrial_naturalGas = consumption_industrial_naturalGas;
        this->consumption_industrial_otherPetroleumProducts = consumption_industrial_otherPetroleumProducts;
        this->consumption_industrial_solar = consumption_industrial_solar;
        this->consumption_industrial_wind = consumption_industrial_wind;
        this->consumption_industrial_wood = consumption_industrial_wood;
        this->consumption_refinery_coal = consumption_refinery_coal;
        this->consumption_refinery_distillateFuelOil = consumption_refinery_distillateFuelOil;
        this->consumption_refinery_naturalGas = consumption_refinery_naturalGas;
        this->consumption_residential_coal = consumption_residential_coal;
        this->consumption_residential_distillateFuelOil = consumption_residential_distillateFuelOil;
        this->consumption_residential_geothermal = consumption_residential_geothermal;
        this->consumption_residential_kerosene = consumption_residential_kerosene;
        this->consumption_residential_petroleum = consumption_residential_petroleum;
        this->consumption_residential_naturalGas = consumption_residential_naturalGas;
        this->consumption_residential_wood = consumption_residential_wood;
        this->consumption_transportation_coal = consumption_transportation_coal;
        this->consumption_transportation_distillateFuelOil = consumption_transportation_distillateFuelOil;
        this->consumption_transportation_petroleum = consumption_transportation_petroleum;
        this->consumption_transportation_naturalGas = consumption_transportation_naturalGas;
        this->expenditure_commercial_coal = expenditure_commercial_coal;
        this->expenditure_commercial_distillateFuelOil = expenditure_commercial_distillateFuelOil;
        this->expenditure_commercial_kerosene = expenditure_commercial_kerosene;
        this->expenditure_commercial_petroleum = expenditure_commercial_petroleum;
        this->expenditure_commercial_naturalGas = expenditure_commercial_naturalGas;
        this->expenditure_electricPower_coal = expenditure_electricPower_coal;
        this->expenditure_electricPower_distillateFuelOil = expenditure_electricPower_distillateFuelOil;
        this->expenditure_electricPower_naturalGas = expenditure_electricPower_naturalGas;
        this->expenditure_industrial_coal = expenditure_industrial_coal;
        this->expenditure_industrial_distillateFuelOil = expenditure_industrial_distillateFuelOil;
        this->expenditure_industrial_kerosene = expenditure_industrial_kerosene;
        this->expenditure_industrial_petroleum = expenditure_industrial_petroleum;
        this->expenditure_industrial_naturalGas = expenditure_industrial_naturalGas;
        this->expenditure_industrial_otherPetroleumProducts = expenditure_industrial_otherPetroleumProducts;
        this->expenditure_residential_coal = expenditure_residential_coal;
        this->expenditure_residential_distillateFuelOil = expenditure_residential_distillateFuelOil;
        this->expenditure_residential_kerosene = expenditure_residential_kerosene;
        this->expenditure_residential_petroleum = expenditure_residential_petroleum;
        this->expenditure_residential_naturalGas = expenditure_residential_naturalGas;
        this->expenditure_residential_wood = expenditure_residential_wood;
        this->expenditure_transportation_coal = expenditure_transportation_coal;
        this->expenditure_transportation_distillateFuelOil = expenditure_transportation_distillateFuelOil;
        this->expenditure_transportation_petroleum = expenditure_transportation_petroleum;
        this->expenditure_transportation_naturalGas = expenditure_transportation_naturalGas;
        this->price_commercial_coal = price_commercial_coal;
        this->price_commercial_distillateFuelOil = price_commercial_distillateFuelOil;
        this->price_commercial_kerosene = price_commercial_kerosene;
        this->price_commercial_petroleum = price_commercial_petroleum;
        this->price_commercial_naturalGas = price_commercial_naturalGas;
        this->price_electricPower_coal = price_electricPower_coal;
        this->price_electricPower_distillateFuelOil = price_electricPower_distillateFuelOil;
        this->price_electricPower_naturalGas = price_electricPower_naturalGas;
        this->price_industrial_coal = price_industrial_coal;
        this->price_industrial_distillateFuelOil = price_industrial_distillateFuelOil;
        this->price_industrial_kerosene = price_industrial_kerosene;
        this->price_industrial_petroleum = price_industrial_petroleum;
        this->price_industrial_naturalGas = price_industrial_naturalGas;
        this->price_industrial_otherPetroleumProducts = price_industrial_otherPetroleumProducts;
        this->price_transportation_coal = price_transportation_coal;
        this->price_transportation_distillateFuelOil = price_transportation_distillateFuelOil;
        this->price_transportation_petroleum = price_transportation_petroleum;
        this->price_transportation_naturalGas = price_transportation_naturalGas;

    }

};


#endif //DATASTRUCTURES_GROUP109_FINALPROJECT_STATE_H
