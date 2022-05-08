// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Vehicle_01_ClassSelectorDataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Vehicle_01_ClassSelectorDataInterface.TBP_Vehicle_01_ClassSelectorDataInterface_C.GetVehicleCDO
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_VehicleSelection> InEnum                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_Vehicle_01_DataInterface_C* OutCDO                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Vehicle_01_ClassSelectorDataInterface_C::GetVehicleCDO(TEnumAsByte<ENUM_VehicleSelection> InEnum, class UTBP_Vehicle_01_DataInterface_C** OutCDO)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01_ClassSelectorDataInterface.TBP_Vehicle_01_ClassSelectorDataInterface_C.GetVehicleCDO"));

	struct
	{
		TEnumAsByte<ENUM_VehicleSelection> InEnum;
		class UTBP_Vehicle_01_DataInterface_C* OutCDO;
	} params = {};

	params.InEnum = InEnum;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutCDO != nullptr)
		*OutCDO = params.OutCDO;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
