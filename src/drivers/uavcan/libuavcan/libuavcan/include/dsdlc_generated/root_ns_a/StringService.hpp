/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/hojin/drone_ws/ethz_ws/ethzasl_fw_px4/src/drivers/uavcan/libuavcan/libuavcan/test/dsdl_test/root_ns_a/99.StringService.uavcan
 */

#ifndef ROOT_NS_A_STRINGSERVICE_HPP_INCLUDED
#define ROOT_NS_A_STRINGSERVICE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
uint8[<=64] string_request
---
uint8[<=64] string_response
******************************************************************************/

/********************* DSDL signature source definition ***********************
root_ns_a.StringService
saturated uint8[<=64] string_request
---
saturated uint8[<=64] string_response
******************************************************************************/

#undef string_request
#undef string_response

namespace root_ns_a
{

struct UAVCAN_EXPORT StringService_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 64 > string_request;
        };

        enum
        {
            MinBitLen
                = FieldTypes::string_request::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::string_request::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::string_request >::Type string_request;

        Request_()
            : string_request()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<519 == MaxBitLen>::check();
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

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 64 > string_response;
        };

        enum
        {
            MinBitLen
                = FieldTypes::string_response::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::string_response::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::string_response >::Type string_response;

        Response_()
            : string_response()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<519 == MaxBitLen>::check();
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

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 99 };

    static const char* getDataTypeFullName()
    {
        return "root_ns_a.StringService";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    StringService_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool StringService_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        string_request == rhs.string_request;
}

template <int _tmpl>
bool StringService_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(string_request, rhs.string_request);
}

template <int _tmpl>
int StringService_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::string_request::encode(self.string_request, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int StringService_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::string_request::decode(self.string_request, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool StringService_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        string_response == rhs.string_response;
}

template <int _tmpl>
bool StringService_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(string_response, rhs.string_response);
}

template <int _tmpl>
int StringService_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::string_response::encode(self.string_response, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int StringService_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::string_response::decode(self.string_response, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature StringService_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x2CFF1AEDA2CF896FULL);

    Request::FieldTypes::string_request::extendDataTypeSignature(signature);

    Response::FieldTypes::string_response::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef StringService_ StringService;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::root_ns_a::StringService > _uavcan_gdtr_registrator_StringService;

}

} // Namespace root_ns_a

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::root_ns_a::StringService::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::root_ns_a::StringService::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::root_ns_a::StringService::Request >::stream(Stream& s, ::root_ns_a::StringService::Request::ParameterType obj, const int level)
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
    s << "string_request: ";
    YamlStreamer< ::root_ns_a::StringService::Request::FieldTypes::string_request >::stream(s, obj.string_request, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::root_ns_a::StringService::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::root_ns_a::StringService::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::root_ns_a::StringService::Response >::stream(Stream& s, ::root_ns_a::StringService::Response::ParameterType obj, const int level)
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
    s << "string_response: ";
    YamlStreamer< ::root_ns_a::StringService::Response::FieldTypes::string_response >::stream(s, obj.string_response, level + 1);
}

}

namespace root_ns_a
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::root_ns_a::StringService::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::root_ns_a::StringService::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::root_ns_a::StringService::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::root_ns_a::StringService::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace root_ns_a

#endif // ROOT_NS_A_STRINGSERVICE_HPP_INCLUDED