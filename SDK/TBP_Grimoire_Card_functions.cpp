// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Grimoire_Card_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.On Texture Loaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::On_Texture_Loaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.On Texture Loaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Randomise Damage Placement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::Randomise_Damage_Placement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Randomise Damage Placement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Play Card Transition Animation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::Play_Card_Transition_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Play Card Transition Animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Back Using DNMR
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InBool                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Grimoire_Card_C::Set_Is_Back_Using_DNMR(bool InBool)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Back Using DNMR"));

	struct
	{
		bool                           InBool;
	} params = {};

	params.InBool = InBool;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Front Using DNMR
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InBool                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Grimoire_Card_C::Set_Is_Front_Using_DNMR(bool InBool)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Front Using DNMR"));

	struct
	{
		bool                           InBool;
	} params = {};

	params.InBool = InBool;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Card To New Card
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     InEntry                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Grimoire_Card_C::Change_Card_To_New_Card(class UTigerGrimoireEntry* InEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Card To New Card"));

	struct
	{
		class UTigerGrimoireEntry*     InEntry;
	} params = {};

	params.InEntry = InEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Quality Level
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     InRow                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_Grimoire_Card_C::Change_Quality_Level(const struct FDataTableRowHandle& InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Quality Level"));

	struct
	{
		struct FDataTableRowHandle     InRow;
	} params = {};

	params.InRow = InRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Border Colour
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     InRow                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_Grimoire_Card_C::Change_Border_Colour(const struct FDataTableRowHandle& InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Border Colour"));

	struct
	{
		struct FDataTableRowHandle     InRow;
	} params = {};

	params.InRow = InRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Card Mat Properties to Material
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::Send_Card_Mat_Properties_to_Material()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Card Mat Properties to Material"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Backface Texture to Material
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::Send_Backface_Texture_to_Material()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Backface Texture to Material"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Frontface Texture to Material
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::Send_Frontface_Texture_to_Material()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Frontface Texture to Material"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Overwrite Card Material Preset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGrimoireCardMaterialPreset* InPreset                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Grimoire_Card_C::Overwrite_Card_Material_Preset(class UGrimoireCardMaterialPreset* InPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Overwrite Card Material Preset"));

	struct
	{
		class UGrimoireCardMaterialPreset* InPreset;
	} params = {};

	params.InPreset = InPreset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Frontface
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                InTexture                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Grimoire_Card_C::Set_Frontface(class UTexture* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Frontface"));

	struct
	{
		class UTexture*                InTexture;
	} params = {};

	params.InTexture = InTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Backface
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                InTexture                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Grimoire_Card_C::Set_Backface(class UTexture* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Backface"));

	struct
	{
		class UTexture*                InTexture;
	} params = {};

	params.InTexture = InTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Create Material Instance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::Create_Material_Instance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Create Material Instance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Show
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     InEntry                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerGrimoireEntryMediaDisplayMode InLastEntryNode                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Grimoire_Card_C::Show(class UTigerGrimoireEntry* InEntry, ETigerGrimoireEntryMediaDisplayMode InLastEntryNode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Show"));

	struct
	{
		class UTigerGrimoireEntry*     InEntry;
		ETigerGrimoireEntryMediaDisplayMode InLastEntryNode;
	} params = {};

	params.InEntry = InEntry;
	params.InLastEntryNode = InLastEntryNode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::FloatingCardAnimation__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::FloatingCardAnimation__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.PlayFloatingAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::PlayFloatingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.PlayFloatingAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ExecuteUbergraph_TBP_Grimoire_Card
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Grimoire_Card_C::ExecuteUbergraph_TBP_Grimoire_Card(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ExecuteUbergraph_TBP_Grimoire_Card"));

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


// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Begin Float Animation Dispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Grimoire_Card_C::Begin_Float_Animation_Dispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Begin Float Animation Dispatcher__DelegateSignature"));

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
