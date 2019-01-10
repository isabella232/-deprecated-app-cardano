#ifndef H_CARDANO_APP_ERRORS
#define H_CARDANO_APP_ERRORS

// exception codes
#define SW_DEVELOPER_ERR 0x6B00
#define SW_INVALID_PARAM 0x6B01
#define SW_IMPROPER_INIT 0x6B02

// Still in some call

#define SW_USER_REJECTED 0x6985

enum {
	// Successfull responses
	SUCCESS                 = 0x9000,

	// Bad request header
	ERR_MALFORMED_REQUEST          = 0x6E01,
	// Unknown CLA
	ERR_BAD_CLA                    = 0x6E02,
	// Unknown INS
	ERR_UNKNOWN_INS                = 0x6E03,
	// TODO(should we move this to ERR_INVALID_STATE) ?
	ERR_STILL_IN_CALL              = 0x6E04,
	// P1, P2 or payload is invalid
	ERR_INVALID_REQUEST_PARAMETERS = 0x6E05,
	// Request is not valid in the context of previous calls
	ERR_INVALID_STATE	       = 0x6E06,

	// Internal errors
	ERR_ASSERT             = 0x4700,

	// stream
	ERR_NOT_ENOUGH_INPUT      = 0x4710,
	ERR_DATA_TOO_LARGE        = 0x4711,

	// cbor
	ERR_UNEXPECTED_TOKEN      = 0x4720,

};

#endif
