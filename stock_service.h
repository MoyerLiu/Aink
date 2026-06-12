#ifndef STOCK_SERVICE_H
#define STOCK_SERVICE_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#define STOCK_MAX_ITEMS  5
#define STOCK_SYMBOL_LEN 12
#define STOCK_NAME_LEN   32

typedef struct {
  char symbol[STOCK_SYMBOL_LEN];
  char name[STOCK_NAME_LEN];
  int priceX100;
  int changePctX10;
  bool quoteValid;
} StockQuote;

typedef struct {
  bool valid;
  int count;
  unsigned long fetchedEpoch;
  StockQuote items[STOCK_MAX_ITEMS];
} StockSnapshot;

void stock_service_reset(void);
void stock_service_update(bool force);
bool stock_service_consume_fresh_fetch(void);
void stock_service_get_snapshot(StockSnapshot *out);

/** Best item for launcher tile preview (largest |change| among valid quotes). */
const StockQuote *stock_service_get_tile_preview(void);

/**
 * Locale-aware label: ZH uses East Money name; EN uses ticker codes (never CJK names).
 */
void stock_service_format_display_label(const StockQuote *quote, char *out, size_t outLen);

/** A-share (sh/sz) vs US ticker. */
bool stock_service_is_cn_symbol(const char *symbol);

/** Price with market currency prefix (￥ / $). */
void stock_service_format_price(const StockQuote *quote, char *out, size_t outLen);

/** Fetch UTF-8 names when switching to Chinese if not cached yet. */
void stock_service_on_locale_changed(void);

#endif
