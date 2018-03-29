/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSERROR_P_H
#define SQSERROR_P_H

#include "sqserror.h"

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT SqsErrorPrivate {

public:
    SqsError::ErrorCode code; ///< SQS error code.
    QVariantMap detail;       ///< SQS error detail.
    QString message;          ///< SQS error message.
    QString rawCode;          ///< Raw SQS error code.
    QString rawType;          ///< Raw SQS error type.
    SqsError::ErrorType type; ///< SQS error type.

    SqsErrorPrivate(SqsError * const q);
    SqsErrorPrivate(const SqsErrorPrivate * const other, SqsError * const q);

    virtual ~SqsErrorPrivate();

    void parse(QXmlStreamReader &xml);

    static SqsError::ErrorCode codeFromString(const QString &code);
    static SqsError::ErrorType typeFromString(const QString &type);

private:
    Q_DECLARE_PUBLIC(SqsError)
    Q_DISABLE_COPY(SqsErrorPrivate)
    SqsError * const q_ptr; ///< Internal q-pointer.

};

QTAWS_END_NAMESPACE

#endif
