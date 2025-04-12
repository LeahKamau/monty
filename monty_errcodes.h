#ifndef MONTY_ERRCODES_H
#define MONTY_ERRCODES_H

/**
 * enum error_code - internal error codes for the monty program.
 * @DIVISION_BY_ZERO: cannot divide by 0.
 * @EMPTY_STACK: cannot perform operation on an empty stack.
 * @INVALID_ARGS: invalid number of arguments to the program.
 * @MALLOC: memory error.
 * @PCHAR_OUT_OF_RANGE: argument to `pchar` is not an ascii character.
 * @PINT_EMPTY_STACK: cannot print empty stack.
 * @PUSH_NO_INTEGER: invalid argument to `push` opcode.
 * @STACK_TOO_SHORT: not enough elements in the stack to complete operation.
 * @UNKNOWN_OPCODE: encountered an unknown opcode.
 */
enum error_code
{
	DIVISION_BY_ZERO,
	EMPTY_STACK,
	INVALID_ARGS,
	MALLOC,
	PCHAR_OUT_OF_RANGE,
	PINT_EMPTY_STACK,
	PUSH_NO_INTEGER,
	STACK_TOO_SHORT,
	UNKNOWN_OPCODE,
};

#endif /* MONTY_ERRCODES_H */
