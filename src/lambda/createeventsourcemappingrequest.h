/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEEVENTSOURCEMAPPINGREQUEST_H
#define QTAWS_CREATEEVENTSOURCEMAPPINGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class CreateEventSourceMappingRequestPrivate;

class QTAWS_EXPORT CreateEventSourceMappingRequest : public LambdaRequest {

public:
    CreateEventSourceMappingRequest(const CreateEventSourceMappingRequest &other);
    CreateEventSourceMappingRequest();

    virtual bool isValid() const override;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const override;

private:
    Q_DECLARE_PRIVATE(CreateEventSourceMappingRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
