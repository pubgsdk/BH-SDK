// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_ArticleLink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateCardAppearance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                FrontCardTexture               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     CardBorderRow                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UTBP_UI_Grimoire_ArticleLink_C::UpdateCardAppearance(class UTexture* FrontCardTexture, const struct FDataTableRowHandle& CardBorderRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateCardAppearance"));

	struct
	{
		class UTexture*                FrontCardTexture;
		struct FDataTableRowHandle     CardBorderRow;
	} params = {};

	params.FrontCardTexture = FrontCardTexture;
	params.CardBorderRow = CardBorderRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleApperance
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerGrimoireArticleType      ArticleType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleApperance(ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleApperance"));

	struct
	{
		ETigerGrimoireArticleType      ArticleType;
	} params = {};

	params.ArticleType = ArticleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     GrimoireEntry                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerGrimoireArticleType      ArticleType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleEntry(class UTigerGrimoireEntry* GrimoireEntry, ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleEntry"));

	struct
	{
		class UTigerGrimoireEntry*     GrimoireEntry;
		ETigerGrimoireArticleType      ArticleType;
	} params = {};

	params.GrimoireEntry = GrimoireEntry;
	params.ArticleType = ArticleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.OnMediaLoaded
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleLink_C::OnMediaLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.OnMediaLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleImage
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleImage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleType
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerGrimoireArticleType      ArticleType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleType(ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleType"));

	struct
	{
		ETigerGrimoireArticleType      ArticleType;
	} params = {};

	params.ArticleType = ArticleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleName
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EntryName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleName(const struct FText& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleName"));

	struct
	{
		struct FText                   EntryName;
	} params = {};

	params.EntryName = EntryName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleLink_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Tick"));

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


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleLink_C::BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleLink_C::BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleLink_C::BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Anim Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleLink_C::Anim_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Anim Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleLink_C::ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink"));

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


// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ArticleButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EntryId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ETigerGrimoireArticleType      ArticleType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleLink_C::ArticleButtonPressed__DelegateSignature(const struct FString& EntryId, ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ArticleButtonPressed__DelegateSignature"));

	struct
	{
		struct FString                 EntryId;
		ETigerGrimoireArticleType      ArticleType;
	} params = {};

	params.EntryId = EntryId;
	params.ArticleType = ArticleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
