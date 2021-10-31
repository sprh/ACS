import sys
import time


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

    if argv[1] != '-f' and argv[2] != '-n':
        err_message_2()
        sys.exit(2)
    print('Start')
    start_time = time.perf_counter()
    print('Stop in %d' % (time.perf_counter() - start_time))
    sys.exit(0)


if __name__ == "__main__":
    main(sys.argv)
