import sys
from datetime import datetime

from container.containe import Container


def err_message_1():
    print('Incorrect command line!\n'
          'Waited:\n'
          'command -f infile outfile01 outfile02\n'
          'Or:\n'
          'command -n number outfile01 outfile02\n')


def err_message_2():
    print('Incorrect qualifier value!\n'
          'Waited:\n'
          'command -f infile outfile01 outfile02\n'
          'Or:\n'
          'command -n number outfile01 outfile02\n')


def main(argv: [str]):
    if len(argv) != 5:
        err_message_1()
        sys.exit(1)
    print('Start')
    start_time = datetime.now()

    if argv[1] == '-f':
        try:
            input_file = open(argv[2], 'r')
            container = Container.in_from_file(input_file)
        except IOError:
            print('Incorrect input file')
            sys.exit(3)
    elif argv[1] == '-n':
        try:
            items_count = int(argv[2])
            if items_count < 1 or items_count > 10000:
                raise ValueError
            container = Container.in_random(items_count)
        except ValueError:
            print('Incorrect number of arguments.\n'
                  'Should be an integer number from 1 to 10.000')
            sys.exit(3)
    else:
        err_message_2()
        sys.exit(2)
    try:
        output_file_1 = open(argv[3], 'w')
        container.out(output_file_1)
    except IOError:
        print('Incorrect output file 1')
        sys.exit(3)
    try:
        output_file_1 = open(argv[4], 'w')
        output_file_1.write('Average area: {average_area}\n'.format(average_area=container.average_area()))
        container.remove_items_with_area_bigger_than_average()
        output_file_1.write('Items with area lower than average:\n')
        container.out(output_file_1)
    except IOError:
        print('Incorrect output file 2')
        sys.exit(3)
    print('Stop in %s milliseconds' % (datetime.now() - start_time).microseconds)
    sys.exit(0)


if __name__ == "__main__":
    main(sys.argv)
