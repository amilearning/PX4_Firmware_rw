/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/src/drivers/uavcan/libuavcan/libuavcan/test/dsdl_test/root_ns_a/Deep.uavcan
 */

#ifndef ROOT_NS_A_DEEP_HPP_INCLUDED
#define ROOT_NS_A_DEEP_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <root_ns_a/A.hpp>
#include <root_ns_a/B.hpp>

/******************************* Source text **********************************
#
# Info for all battery packs of the primary power supply.
#

bool c
uint8[<20] str
A[<2] a
B[2] b
******************************************************************************/

/********************* DSDL signature source definition ***********************
root_ns_a.Deep
saturated bool c
saturated uint8[<=19] str
root_ns_a.A[<=1] a
root_ns_a.B[2] b
******************************************************************************/

#undef c
#undef str
#undef a
#undef b

namespace root_ns_a
{

template <int _tmpl>
struct UAVCAN_EXPORT Deep_
{
    typedef const Deep_<_tmpl>& ParameterType;
    typedef Deep_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > c;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 19 > str;
        typedef ::uavcan::Array< ::root_ns_a::A, ::uavcan::ArrayModeDynamic, 1 > a;
        typedef ::uavcan::Array< ::root_ns_a::B, ::uavcan::ArrayModeStatic, 2 > b;
    };

    enum
    {
        MinBitLen
            = FieldTypes::c::MinBitLen
            + FieldTypes::str::MinBitLen
            + FieldTypes::a::MinBitLen
            + FieldTypes::b::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::c::MaxBitLen
            + FieldTypes::str::MaxBitLen
            + FieldTypes::a::MaxBitLen
            + FieldTypes::b::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::c >::Type c;
    typename ::uavcan::StorageType< typename FieldTypes::str >::Type str;
    typename ::uavcan::StorageType< typename FieldTypes::a >::Type a;
    typename ::uavcan::StorageType< typename FieldTypes::b >::Type b;

    Deep_()
        : c()
        , str()
        , a()
        , b()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<767 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    // This type has no default data type ID

    static const char* getDataTypeFullName()
    {
        return "root_ns_a.Deep";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Deep_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        c == rhs.c &&
        str == rhs.str &&
        a == rhs.a &&
        b == rhs.b;
}

template <int _tmpl>
bool Deep_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(c, rhs.c) &&
        ::uavcan::areClose(str, rhs.str) &&
        ::uavcan::areClose(a, rhs.a) &&
        ::uavcan::areClose(b, rhs.b);
}

template <int _tmpl>
int Deep_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::c::encode(self.c, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::str::encode(self.str, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::a::encode(self.a, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::b::encode(self.b, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Deep_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::c::decode(self.c, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::str::decode(self.str, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::a::decode(self.a, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::b::decode(self.b, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Deep_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xC6B2F2111282CDEDULL);

    FieldTypes::c::extendDataTypeSignature(signature);
    FieldTypes::str::extendDataTypeSignature(signature);
    FieldTypes::a::extendDataTypeSignature(signature);
    FieldTypes::b::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Deep_<0> Deep;

// No default registration

} // Namespace root_ns_a

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::root_ns_a::Deep >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::root_ns_a::Deep::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::root_ns_a::Deep >::stream(Stream& s, ::root_ns_a::Deep::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "c: ";
    YamlStreamer< ::root_ns_a::Deep::FieldTypes::c >::stream(s, obj.c, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "str: ";
    YamlStreamer< ::root_ns_a::Deep::FieldTypes::str >::stream(s, obj.str, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "a: ";
    YamlStreamer< ::root_ns_a::Deep::FieldTypes::a >::stream(s, obj.a, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "b: ";
    YamlStreamer< ::root_ns_a::Deep::FieldTypes::b >::stream(s, obj.b, level + 1);
}

}

namespace root_ns_a
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::root_ns_a::Deep::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::root_ns_a::Deep >::stream(s, obj, 0);
    return s;
}

} // Namespace root_ns_a

#endif // ROOT_NS_A_DEEP_HPP_INCLUDED