// This code was generated for simulation with app4mc.sim

#include "amaltheaTop/swModel/labels/yaw_rate_type_Label.h"

std::shared_ptr<DataLabel> yaw_rate_type_Label = nullptr;

std::shared_ptr<DataLabel>  get_yaw_rate_type_Label() {
	if (yaw_rate_type_Label == nullptr){
		yaw_rate_type_Label = std::make_shared<DataLabel>("yaw_rate_type_Label", 1000);
	}
	return yaw_rate_type_Label;
}

