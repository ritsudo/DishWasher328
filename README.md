# ПО-заместитель для устройств на модуле WQP6-3207A, WQP12-7207 и аналогичным

Внимание! Неправильная настройка или эксплуатация ПО может привести к физическому ущербу (пожар, утопление водой),
за которые автор не несёт ответственности!
ПО распространяется как есть, испольуйте его на свой страх и риск. Многие участки требуют доработки.
ПО предназначено для микроконтроллера ATMEL ATMEGA328 с соответствующей схемой подключения к основной плате.
Комплириуется в Atmel Studio 2010, загружается через программатр USBASP используя П.О. AVRDUDE

# Авторы
Вася Kekovsky (pikabu.ru)

# Текущая программа мойки
ДЛЯ ВЕРСИИ 0.18.0 (альфа):
	Экспресс-мойка при 60 градусах:
- Мойка с моющим средством, 60 градусов, 22 минуты
- Ополаскивание холодной водой, 7 минуты
Итого: примерно 29 минут на один цикл мойки.

# TODO
- Отсутствует смягчение воды (SALT)
- Отсутствует контроль ополаскивателя (ISB)

# Известные баги и недоработки
ДЛЯ ВЕРСИИ 0.18.0 (альфа):

!КРИТИЧНО! 
- Программа иногда зависает после первой стадии, требует перезапуска
- Обработка кнопки питания как следует не реализована, иногда возможно двойное срабатывание

- Fluid Meter:
Контроль воды по FM в текущей версии не реализован (не осуществляется)
Прерывания PCINT иногда срабатывают на оба фронта
Возможно дублирующее нажатие на кнопку включения (временно скомпенсировано Delay-задержками)
Конфигурация пинов жестко вшита в Fluid Meter

- LCD1602
Нельзя выводить текст во вторую строку
Нельзя частично менять текст, можно передавать только массив Char'ов

- Main Cycle
Присутствуют некоторые ненужные задержки

- Thermal Check
Показания термометра весьма грубые, приведены к линейной функции
Обработка значений АЦП одинарно-тройная, значения не очень точны.

- Timer
Конфигурация таймера жестко вшита на кварц 6МГц

- DishWasher
Контроль осуществляется в главном цикле, хотелось бы повесить его на первый таймер

