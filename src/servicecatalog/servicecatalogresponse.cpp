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

#include "servicecatalogresponse.h"
#include "servicecatalogresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  ServiceCatalogResponse
 *
 * @brief  Handles ServiceCatalog ServiceCatalog responses.
 *
 * @see    ServiceCatalogClient::serviceCatalog
 */

/**
 * @brief  Constructs a new ServiceCatalogResponse object.
 *
 * @param  parent   This object's parent.
 */
ServiceCatalogResponse::ServiceCatalogResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ServiceCatalogResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void ServiceCatalogResponse::parseFailure(QIODevice &response)
{
    Q_D(ServiceCatalogResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  ServiceCatalogResponsePrivate
 *
 * @brief  Private implementation for ServiceCatalogResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServiceCatalogResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ServiceCatalogResponse instance.
 */
ServiceCatalogResponsePrivate::ServiceCatalogResponsePrivate(
    ServiceCatalogResponse * const q) : QtAws::Core::AwsAbstractResponePrivate(q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
