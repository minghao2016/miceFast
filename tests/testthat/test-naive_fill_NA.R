
context("miceFast-auto_imputes_funcs")


test_that("auto_imputes", {
  data(air_miss)

  test <- sum(is.na(naive_fill_NA(air_miss))) == 0

  test_1 <- identical(vapply(naive_fill_NA(air_miss),class,character(1)),vapply(air_miss,class,character(1)))

  test_all <- expect_true(all(c(test,test_1)))
})