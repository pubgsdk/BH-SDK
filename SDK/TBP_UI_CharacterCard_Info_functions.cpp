// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CharacterCard_Info_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIconBorderBackground
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterCard_Info_C::SetPlayerIconBorderBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIconBorderBackground"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetCardShapeAndBackground
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterCard_Info_C::SetCardShapeAndBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetCardShapeAndBackground"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterCard_Info_C::SetPlayerIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.BuildCharacterCard
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterCard_Info_C::BuildCharacterCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.BuildCharacterCard"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CharacterCard_Info_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.OnInit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InRepresentedPlayer            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterCard_Info_C::OnInit(class ATigerPlayerState* InRepresentedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.OnInit"));

	struct
	{
		class ATigerPlayerState*       InRepresentedPlayer;
	} params = {};

	params.InRepresentedPlayer = InRepresentedPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterCard_Info_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.ExecuteUbergraph_TBP_UI_CharacterCard_Info
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterCard_Info_C::ExecuteUbergraph_TBP_UI_CharacterCard_Info(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.ExecuteUbergraph_TBP_UI_CharacterCard_Info"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
