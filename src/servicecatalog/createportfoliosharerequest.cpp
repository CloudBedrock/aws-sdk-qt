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

#include "createportfoliosharerequest.h"
#include "createportfoliosharerequest_p.h"
#include "createportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioShareRequest
 *
 * \brief The CreatePortfolioShareRequest class provides an interface for ServiceCatalog CreatePortfolioShare requests.
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
 * \sa ServiceCatalogClient::createPortfolioShare
 */

/*!
 * @brief  Constructs a new CreatePortfolioShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePortfolioShareRequest::CreatePortfolioShareRequest(const CreatePortfolioShareRequest &other)
    : ServiceCatalogRequest(new CreatePortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreatePortfolioShareRequest object.
 */
CreatePortfolioShareRequest::CreatePortfolioShareRequest()
    : ServiceCatalogRequest(new CreatePortfolioShareRequestPrivate(ServiceCatalogRequest::CreatePortfolioShareAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePortfolioShareRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreatePortfolioShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePortfolioShareResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new CreatePortfolioShareResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreatePortfolioShareRequestPrivate
 *
 * @brief  Private implementation for CreatePortfolioShareRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreatePortfolioShareRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CreatePortfolioShareRequest instance.
 */
CreatePortfolioShareRequestPrivate::CreatePortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, CreatePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreatePortfolioShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePortfolioShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePortfolioShareRequest instance.
 */
CreatePortfolioShareRequestPrivate::CreatePortfolioShareRequestPrivate(
    const CreatePortfolioShareRequestPrivate &other, CreatePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
