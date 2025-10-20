﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct AppleInAppPurchaseReceiptU5BU5D_t78C9D228935E99563B38B77BBA52C2987C24CADE;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1;
struct AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1;
struct Exception_t;
struct IAPSecurityException_tE63D6F6D0329253B2F734213B640B4E1D977889B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5BB2ADFBBDBD48A3911D3A6F57F4E8FA6469C7F9 
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1  : public RuntimeObject
{
	int32_t ___U3CquantityU3Ek__BackingField;
	String_t* ___U3CproductIDU3Ek__BackingField;
	String_t* ___U3CtransactionIDU3Ek__BackingField;
	String_t* ___U3CoriginalTransactionIdentifierU3Ek__BackingField;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CpurchaseDateU3Ek__BackingField;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CoriginalPurchaseDateU3Ek__BackingField;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CsubscriptionExpirationDateU3Ek__BackingField;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CcancellationDateU3Ek__BackingField;
	int32_t ___U3CisFreeTrialU3Ek__BackingField;
	int32_t ___U3CproductTypeU3Ek__BackingField;
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField;
};
struct AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1  : public RuntimeObject
{
	String_t* ___U3CbundleIDU3Ek__BackingField;
	String_t* ___U3CappVersionU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CopaqueU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3ChashU3Ek__BackingField;
	String_t* ___U3CoriginalApplicationVersionU3Ek__BackingField;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CreceiptCreationDateU3Ek__BackingField;
	AppleInAppPurchaseReceiptU5BU5D_t78C9D228935E99563B38B77BBA52C2987C24CADE* ___inAppPurchaseReceipts;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct IAPSecurityException_tE63D6F6D0329253B2F734213B640B4E1D977889B  : public Exception_t
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_bundleID_m3F72AF439DFB468847648E0DF644ABA7334AA65B (AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CbundleIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbundleIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_appVersion_m1296601ABFC88411D9B1A0D50E30CF6FA6624F55 (AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CappVersionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CappVersionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_opaque_mB4BF728724CD3FB3E62C639265D2C95ACF357932 (AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CopaqueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CopaqueU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_hash_m06055F9F68B92C5A96B101009405BEA648A0B00F (AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3ChashU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChashU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_originalApplicationVersion_m1E10B7E96AC63C0729378893E50EA02BB4C02A93 (AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CoriginalApplicationVersionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoriginalApplicationVersionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt_set_receiptCreationDate_m31E3CC27251E95A237B77521806DCBE7289DDFC5 (AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CreceiptCreationDateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleReceipt__ctor_m04A521B14EA3EFEC7172F85BA5972C3DB7403850 (AppleReceipt_tB2915CCCD56B311245D0225CD39B580B9EF5DDE1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_quantity_mE35E071F9E8D516CDA98F427CF466D3A9EE7E612 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CquantityU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m63220C43A43698508C41748AC8A8973C3A821A41 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CproductIDU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productID_m963ABA5E980C1151B0E3DF932FF881BF48FDC545 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CproductIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproductIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_transactionID_m3A48547ED02EF2CEEF6172DABCBFFFBC2F09A116 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CtransactionIDU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransactionIDU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalTransactionIdentifier_m7CDEE37F182E7702BA8E9E9B65904AD112877334 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CoriginalTransactionIdentifierU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoriginalTransactionIdentifierU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AppleInAppPurchaseReceipt_get_purchaseDate_m7EAEFDFD682231B7337481FF2865F67B1D882262 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CpurchaseDateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_purchaseDate_m9085B789B8672698FF5580E618FD9BBAE6E3DACC (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CpurchaseDateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_originalPurchaseDate_mE56D9694725736CEC534CB47ED73C6B9B8B8CE36 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CoriginalPurchaseDateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m2CA5A6A1E85AF5E5230AA07DCB299DAE9735A621 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CsubscriptionExpirationDateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_subscriptionExpirationDate_mCE610B478AE7E27A93E736CBD0B647F0F82C2EA3 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CsubscriptionExpirationDateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AppleInAppPurchaseReceipt_get_cancellationDate_m8D281D6DA6898DCD0A697C651E8DC5A71C75926A (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CcancellationDateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_cancellationDate_m1DE6F7F86E492A807BC75E4E3BF9DF78011B9C92 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CcancellationDateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_m7FEE969519A62A4B7BE1482BE6257FF78626B8DA (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CisFreeTrialU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isFreeTrial_m37474033281ADA47A6BEBD78D927342AA52B912D (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CisFreeTrialU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m5A3C2664F17A21A98B267B8E49695082148CE1E9 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CproductTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_productType_mD9F41AA9EA7EDA171A2FA9157B6D2B6421B4FD0D (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CproductTypeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_mC43A751D41E0A2D565C8985CEA277C22EF62C44B (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CisIntroductoryPricePeriodU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt_set_isIntroductoryPricePeriod_mD6489F8B249086FED269C123E7492F6FA9CE1FF7 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CisIntroductoryPricePeriodU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppleInAppPurchaseReceipt__ctor_m92103C521F6E7B94BC390AEE1FCDBB9E8EDCF192 (AppleInAppPurchaseReceipt_t5DC5C0301A5F1EDBAEFE3423D6909D65BE6786E1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAPSecurityException__ctor_m892FD79E763D10C234E20FD1AC79398697408ABB (IAPSecurityException_tE63D6F6D0329253B2F734213B640B4E1D977889B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
