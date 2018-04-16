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

#include "associateproductwithportfoliorequest.h"
#include "associateproductwithportfoliorequest_p.h"
#include "associateproductwithportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateProductWithPortfolioRequest
 *
 * \brief The AssociateProductWithPortfolioRequest class encapsulates ServiceCatalog AssociateProductWithPortfolio requests.
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
 * \sa ServiceCatalogClient::associateProductWithPortfolio
 */

/*!
 * @brief  Constructs a new AssociateProductWithPortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateProductWithPortfolioRequest::AssociateProductWithPortfolioRequest(const AssociateProductWithPortfolioRequest &other)
    : ServiceCatalogRequest(new AssociateProductWithPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AssociateProductWithPortfolioRequest object.
 */
AssociateProductWithPortfolioRequest::AssociateProductWithPortfolioRequest()
    : ServiceCatalogRequest(new AssociateProductWithPortfolioRequestPrivate(ServiceCatalogRequest::AssociateProductWithPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateProductWithPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AssociateProductWithPortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateProductWithPortfolioResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateProductWithPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new AssociateProductWithPortfolioResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AssociateProductWithPortfolioRequestPrivate
 *
 * @brief  Private implementation for AssociateProductWithPortfolioRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateProductWithPortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public AssociateProductWithPortfolioRequest instance.
 */
AssociateProductWithPortfolioRequestPrivate::AssociateProductWithPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateProductWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateProductWithPortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateProductWithPortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateProductWithPortfolioRequest instance.
 */
AssociateProductWithPortfolioRequestPrivate::AssociateProductWithPortfolioRequestPrivate(
    const AssociateProductWithPortfolioRequestPrivate &other, AssociateProductWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
