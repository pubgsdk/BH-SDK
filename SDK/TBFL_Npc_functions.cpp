// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_Npc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_Npc.TBFL_Npc_C.GetAttachmentInfoFromIdentifier
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Identifier                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerPropAttachmentInfo ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor)

struct FTigerPropAttachmentInfo UTBFL_Npc_C::GetAttachmentInfoFromIdentifier(const struct FName& Identifier, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Npc.TBFL_Npc_C.GetAttachmentInfoFromIdentifier"));

	struct
	{
		struct FName                   Identifier;
		class UObject*                 __WorldContext;
		struct FTigerPropAttachmentInfo ReturnValue;
	} params = {};

	params.Identifier = Identifier;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
