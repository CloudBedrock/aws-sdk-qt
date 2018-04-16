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

#include "executeprovisionedproductplanresponse.h"
#include "executeprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductPlanResponse
 *
 * \brief The ExecuteProvisionedProductPlanResponse class provides an interace for ServiceCatalog ExecuteProvisionedProductPlan responses.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::executeProvisionedProductPlan
 */

/*!
 * @brief  Constructs a new ExecuteProvisionedProductPlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExecuteProvisionedProductPlanResponse::ExecuteProvisionedProductPlanResponse(
        const ExecuteProvisionedProductPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ExecuteProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new ExecuteProvisionedProductPlanRequest(request));
    setReply(reply);
}

const ExecuteProvisionedProductPlanRequest * ExecuteProvisionedProductPlanResponse::request() const
{
    Q_D(const ExecuteProvisionedProductPlanResponse);
    return static_cast<const ExecuteProvisionedProductPlanRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog ExecuteProvisionedProductPlan response.
 *
 * @param  response  Response to parse.
 */
void ExecuteProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExecuteProvisionedProductPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ExecuteProvisionedProductPlanResponsePrivate
 *
 * \brief Private implementation for ExecuteProvisionedProductPlanResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ExecuteProvisionedProductPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExecuteProvisionedProductPlanResponse instance.
 */
ExecuteProvisionedProductPlanResponsePrivate::ExecuteProvisionedProductPlanResponsePrivate(
    ExecuteProvisionedProductPlanResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog ExecuteProvisionedProductPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExecuteProvisionedProductPlanResponsePrivate::parseExecuteProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteProvisionedProductPlanResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
