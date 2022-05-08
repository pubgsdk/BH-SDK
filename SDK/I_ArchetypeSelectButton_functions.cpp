// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "I_ArchetypeSelectButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsDeselected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UI_ArchetypeSelectButton_C::SetIsDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsDeselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UI_ArchetypeSelectButton_C::SetIsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function I_ArchetypeSelectButton.I_ArchetypeSelectButton_C.SetIsSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
