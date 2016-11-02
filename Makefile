SRC=./src
OUT=./out
CC=gcc
CFLAGS=-std=c99 -g

init:
	@mkdir -p $(OUT)

# such chaining.much wow.
all: $(sort $(subst $(SRC)/,,$(patsubst %.c, %.out, $(wildcard $(SRC)/*.c))))

%.out: $(SRC)/%.c Makefile
	@echo "make $@: "
	@$(CC) $(CFLAGS) $< -o $(OUT)/$@
	@$(OUT)/$@
	@echo ""
	##############################################################################

clean:
	@rm -rf $(OUT)
