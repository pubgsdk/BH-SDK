// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_ChatWIndow_Owner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C.OnMessageInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           OnlyGroup                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPI_ChatWIndow_Owner_C::OnMessageInput(const struct FText& MessageText, bool OnlyGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C.OnMessageInput"));

	struct
	{
		struct FText                   MessageText;
		bool                           OnlyGroup;
	} params = {};

	params.MessageText = MessageText;
	params.OnlyGroup = OnlyGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
