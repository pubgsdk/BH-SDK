// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ActiveBuffsPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.SetTigerPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SetNewTigerPlayer              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ActiveBuffsPanel_C::SetTigerPlayer(class APawn* NewPawn, bool* SetNewTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.SetTigerPlayer"));

	struct
	{
		class APawn*                   NewPawn;
		bool                           SetNewTigerPlayer;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SetNewTigerPlayer != nullptr)
		*SetNewTigerPlayer = params.SetNewTigerPlayer;
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.GetItemFromColumnIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ColumnIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_ActiveBuffItem_C* Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::GetItemFromColumnIndex(int ColumnIndex, class UTBP_UI_ActiveBuffItem_C** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.GetItemFromColumnIndex"));

	struct
	{
		int                            ColumnIndex;
		class UTBP_UI_ActiveBuffItem_C* Item;
	} params = {};

	params.ColumnIndex = ColumnIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Item != nullptr)
		*Item = params.Item;
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.Tick"));

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


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffAdded"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRemoved"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRefreshed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRefreshed"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPawnChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::OnPawnChanged_Event_1(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPawnChanged_Event_1"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPlayerStateReceived
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::OnPlayerStateReceived(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPlayerStateReceived"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnClientBuffIdUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OldId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::OnClientBuffIdUpdated(int OldId, int NewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnClientBuffIdUpdated"));

	struct
	{
		int                            OldId;
		int                            NewId;
	} params = {};

	params.OldId = OldId;
	params.NewId = NewId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.ExecuteUbergraph_TBP_UI_ActiveBuffsPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffsPanel_C::ExecuteUbergraph_TBP_UI_ActiveBuffsPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.ExecuteUbergraph_TBP_UI_ActiveBuffsPanel"));

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
