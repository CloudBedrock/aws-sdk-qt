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

#ifndef QTAWS_SERVICECATALOGREQUEST_P_H
#define QTAWS_SERVICECATALOGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogRequest;

class QTAWS_EXPORT ServiceCatalogRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ServiceCatalogRequest::Action action; ///< ServiceCatalog action to be performed.
    QString apiVersion;        ///< ServiceCatalog API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServiceCatalog request (query string) parameters. @todo?

    ServiceCatalogRequestPrivate(const ServiceCatalogRequest::Action action, ServiceCatalogRequest * const q);
    ServiceCatalogRequestPrivate(const ServiceCatalogRequestPrivate &other, ServiceCatalogRequest * const q);

    static QString toString(const ServiceCatalogRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServiceCatalogRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
