/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTPLANREQUEST_P_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTPLANREQUEST_P_H

#include "servicecatalog_p.h"
#include "executeprovisionedproductplanrequest.h"

namespace AWS {

namespace ServiceCatalog {

class ExecuteProvisionedProductPlanRequest;

class QTAWS_EXPORT ExecuteProvisionedProductPlanRequestPrivate : public ServiceCatalogPrivate {

public:
    ExecuteProvisionedProductPlanRequestPrivate(const ServiceCatalog::Action action,
                                   ExecuteProvisionedProductPlanRequest * const q);
    ExecuteProvisionedProductPlanRequestPrivate(const ExecuteProvisionedProductPlanRequestPrivate &other,
                                   ExecuteProvisionedProductPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteProvisionedProductPlanRequest)

};

} // namespace ServiceCatalog
} // namespace AWS

#endif
