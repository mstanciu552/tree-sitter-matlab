function main_factorizare_LU()
    % n = input('n = ');
    n = 3;
    % a = input('a = ');
    a = [-3 1 -6;-21 10 -46;18 -24 59];
    % b = input('b = ');
    b = [-24; -193; 290];
    
    disp(factorizare_LU(n, a));
    disp(rezolvare_LU(n, a, b));
end

function a = factorizare_LU(n, a)
    for k = 1:n-1
        for i = k+1:n
            p = -a(i, k) / a(k, k);
            for j = k+1:n
                a(i, j) = a(i, j) + p * a(k, j);
            end
            a(i, k) = -p;
        end
    end
end

function x = rezolvare_LU(n, a, b)
    a = factorizare_LU(n, a);
    % substitutie progresiva
    y(1) = b(1);
    for i = 2:n
        s = 0;
        for j = 1:i-1
            s = s + a(i, j) * y(j);
        end
        y(i) = b(i) - s;
    end
    % substitutie regresiva
    x(n) = y(n) / a(n, n);
    for i = n-1:-1:1
        s = 0;
        for j = i+1:n
            s = s + a(i, j) * x(j);
        end
        x(i) = (y(i) - s) / a(i, i);
    end
end
