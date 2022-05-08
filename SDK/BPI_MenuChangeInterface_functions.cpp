// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_MenuChangeInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_MenuChangeInterface.BPI_MenuChangeInterface_C.On Menu Changed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    NewMenuWidget                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UBPI_MenuChangeInterface_C::On_Menu_Changed(TSoftClassPtr<class UClass> NewMenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_MenuChangeInterface.BPI_MenuChangeInterface_C.On Menu Changed"));

	struct
	{
		TSoftClassPtr<class UClass>    NewMenuWidget;
	} params = {};

	params.NewMenuWidget = NewMenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
