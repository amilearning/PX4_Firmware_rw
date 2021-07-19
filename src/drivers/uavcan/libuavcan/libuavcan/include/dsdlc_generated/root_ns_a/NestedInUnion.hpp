/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/src/drivers/uavcan/libuavcan/libuavcan/test/dsdl_test/root_ns_a/NestedInUnion.uavcan
 */

#ifndef ROOT_NS_A_NESTEDINUNION_HPP_INCLUDED
#define ROOT_NS_A_NESTEDINUNION_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
# This should be 13 bits long
void2                # 2 bits
uint2[4] array       # 8 bits
void3                # 3 bits
******************************************************************************/

/********************* DSDL signature source definition ***********************
root_ns_a.NestedInUnion
void2
saturated uint2[4] array
void3
******************************************************************************/

#undef _void_0
#undef array
#undef _void_1

namespace root_ns_a
{

template <int _tmpl>
struct UAVCAN_EXPORT NestedInUnion_
{
    typedef const NestedInUnion_<_tmpl>& ParameterType;
    typedef NestedInUnion_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 2, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > _void_0;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 2, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeStatic, 4 > array;
        typedef ::uavcan::IntegerSpec< 3, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > _void_1;
    };

    enum
    {
        MinBitLen
            = FieldTypes::_void_0::MinBitLen
            + FieldTypes::array::MinBitLen
            + FieldTypes::_void_1::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::_void_0::MaxBitLen
            + FieldTypes::array::MaxBitLen
            + FieldTypes::_void_1::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::array >::Type array;

    NestedInUnion_()
        : array()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<13 == MaxBitLen>::check();
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
        return "root_ns_a.NestedInUnion";
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
bool NestedInUnion_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        array == rhs.array;
}

template <int _tmpl>
bool NestedInUnion_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(array, rhs.array);
}

template <int _tmpl>
int NestedInUnion_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    typename ::uavcan::StorageType< typename FieldTypes::_void_1 >::Type _void_1 = 0;
    int res = 1;
    res = FieldTypes::_void_0::encode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::array::encode(self.array, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::_void_1::encode(_void_1, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int NestedInUnion_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    typename ::uavcan::StorageType< typename FieldTypes::_void_0 >::Type _void_0 = 0;
    typename ::uavcan::StorageType< typename FieldTypes::_void_1 >::Type _void_1 = 0;
    int res = 1;
    res = FieldTypes::_void_0::decode(_void_0, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::array::decode(self.array, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::_void_1::decode(_void_1, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature NestedInUnion_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x45BBF41D1C05A50DULL);

    FieldTypes::_void_0::extendDataTypeSignature(signature);
    FieldTypes::array::extendDataTypeSignature(signature);
    FieldTypes::_void_1::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef NestedInUnion_<0> NestedInUnion;

// No default registration

} // Namespace root_ns_a

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::root_ns_a::NestedInUnion >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::root_ns_a::NestedInUnion::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::root_ns_a::NestedInUnion >::stream(Stream& s, ::root_ns_a::NestedInUnion::ParameterType obj, const int level)
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
    s << "array: ";
    YamlStreamer< ::root_ns_a::NestedInUnion::FieldTypes::array >::stream(s, obj.array, level + 1);
}

}

namespace root_ns_a
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::root_ns_a::NestedInUnion::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::root_ns_a::NestedInUnion >::stream(s, obj, 0);
    return s;
}

} // Namespace root_ns_a

#endif // ROOT_NS_A_NESTEDINUNION_HPP_INCLUDED