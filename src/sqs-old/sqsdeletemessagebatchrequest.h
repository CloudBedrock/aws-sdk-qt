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

#ifndef SQSDELETEMESSAGEBATCHREQUEST_H
#define SQSDELETEMESSAGEBATCHREQUEST_H

#include "sqsrequest.h"

QTAWS_BEGIN_NAMESPACE

class SqsDeleteMessageBatchRequestPrivate;

class QTAWS_EXPORT SqsDeleteMessageBatchRequest : public SqsRequest {

public:
  //SqsDeleteMessageBatchRequest(...); ///< @todo
    SqsDeleteMessageBatchRequest(const SqsDeleteMessageBatchRequest &other);
    SqsDeleteMessageBatchRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsDeleteMessageBatchRequest)
    friend class TestSqsDeleteMessageBatchRequest;
};

QTAWS_END_NAMESPACE

#endif
